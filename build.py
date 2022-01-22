#!/env/python3

import subprocess
import sys
import os
import time

USER = subprocess.Popen('whoami', shell=True, stdout=subprocess.PIPE).stdout.read().decode('utf8').replace('\n','')

# IMPORTANT: This will probably not work! You need to change the PATH to your folder
# where the elox kernel source tree is!
PATH = f'/media/leonard/USB/elox_kernel'

BANNER = """

                 .88888888:.
                88888888.88888.
              .8888888888888888.
              888888888888888888
              88' _`88'_  `88888
              88 88 88 88  88888
              88_88_::_88_:88888
              88:::,::,:::::8888
              88`:::::::::'`8888
             .88  `::::'    8:88.
            8888            `8:888.
          .8888'             `888888.
         .8888:..  .::.  ...:'8888888:.
        .8888.'     :'     `'::`88:88888
       .8888        '         `.888:8888.
      888:8         .           888:88888
    .888:88        .:           888:88888:
    8888888.       ::           88:888888
    `.::.888.      ::          .88888888
   .::::::.888.    ::         :::`8888'.:.
  ::::::::::.888   '         .::::::::::::
  ::::::::::::.8    '      .:8::::::::::::.
 .::::::::::::::.        .:888:::::::::::::
 :::::::::::::::88:.__..:88888:::::::::::'
  `'.:::::::::::88888888888.88:::::::::'
miK     `':::_:' -- '' -'-' `':_::::'`

"""

print(BANNER)

if USER != 'root':
  print('[KERNEL] You need to be root!')
  sys.exit(1)

if len(sys.argv) != 2:
  print('[KERNEL] Use: python3 build.py <operation>')
  sys.exit(1)

if sys.argv[1] == 'build':
  list = os.listdir(PATH)
  for root, dirs, files in os.walk(PATH):
    for file in files:
      current_file = os.path.join(root, file)
      if current_file.endswith('.c') or current_file.endswith('.h') or current_file.endswith('.asm') or current_file.endswith('.s') or current_file.endswith('.py'):
        print(f'[KERNEL] Compiling \'{os.path.join(root, current_file)}\'')
        time.sleep(1)

  os.system('make build-x86_64')
  os.system('qemu-system-x86_64 dist/x86_64/kernel.iso')
  

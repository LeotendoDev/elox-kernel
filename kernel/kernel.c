/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'kernel.c'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#include "../header/print.h"
#include "../header/char.h"
#include "../header/boot.h"

void kernel_main() {
    //print_clear();
    print_boot_log("Booting from hard-drive...", DONE);
    print_boot_log("Loading file system...", FAILED);
    print_boot_log("Loading keyboard layout...", DONE);
}

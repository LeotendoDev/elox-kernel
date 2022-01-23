/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'kernel.c'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#ifndef ELOX_BOOT_H
#define ELOX_BOOT_H

enum {
    DONE = 0, FAILED = 1
};

void print_prefix();
void print_boot_log(char* log, char* status);

#endif
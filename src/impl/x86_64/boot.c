/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'kernel.c'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#include "print.h"
#include "boot.h"

void print_prefix() {
    print_str("[");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str(" KERNEL ");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("] ");
}

void print_boot_log(char* log) {
    print_prefix();
    print_str(log);
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("Done!");
}
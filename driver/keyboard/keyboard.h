/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'kernel.c'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#pragma once

#include "../../header/print.h"
#include <stdint.h>
#include "../keyboard/input_signals.h"

extern unsigned char read_port(int port);
extern void write_port(int port, unsigned char val);
extern void kb_init(void);
void keyboard_handler(void);
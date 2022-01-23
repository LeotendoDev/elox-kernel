/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'kernel.c'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#include "number_x86_64.h"

#ifndef ELOX_MEMORY_ALLOC_H
#define ELOX_MEMORY_ALLOC_H

#define MEMORY_CHUNK 1024

void alloc(uint64_t memory_size);
void de_alloc(uint64_t *memory);

#endif /* memory_alloc.h */
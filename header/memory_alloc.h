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

#define HEAP_CAP         640000
#define MEMORY_CHUNK_CAP 1024

void memory_alloc(size_t mem_size);
void free_memory(size_t *memory);

#endif /* memory_alloc.h */
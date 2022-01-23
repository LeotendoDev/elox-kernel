/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'screen.h'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#include "char.h"
#include <stdint.h>

char *to_upper_case(char* character) {
    uint8_t char_index;
    for (int i = 0; i < (ALPHABET_BASE*2) - 1; i++) {
        if (alphabet_table[i] == character) {
            char_index = i;
        }
    }

    if (char_index > ALPHABET_BASE) return character;
    return alphabet_table[char_index + ALPHABET_BASE];
}

char *to_lower_case(char* character) {
    uint8_t char_index;
    for (int i = 0; i < (ALPHABET_BASE*2) - 1; i++) {
        if (alphabet_table[i] == character) {
            char_index = i;
        }
    }

    if (char_index < ALPHABET_BASE) return character;
    return alphabet_table[char_index - ALPHABET_BASE];
}    
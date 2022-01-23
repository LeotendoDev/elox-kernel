/*
 * Copyright (C) Leonard Steinhoff 2021. All rights reserved
 * 
 * LICENSE: Gnu GPL v2
 * AUTHOR: <leotendosteinhoff@gmail.com>
 * FILE: 'screen.h'
 * WEBSITE: <https://ftp.elox-kernel.org>
 * 
*/

#ifndef ELOX_CHAR_SET
#define ELOX_CHAR_SET

#define ALPHABET_BASE 26

static char *alphabet_table[ALPHABET_BASE*2] = {
    // Lower case
    "a", "b", "c", "d", "e", "f", "g",
    "h", "i", "j", "k", "l", "m", "n",
    "o", "p", "q", "r", "s", "t", "u",
    "v", "w", "x", "y", "z",
    // Upper case
    "A", "B", "C", "D", "E", "F", "G",
    "H", "I", "J", "K", "L", "M", "N",
    "O", "P", "Q", "R", "S", "T", "U",
    "V", "W", "X", "Y", "Z"
};

char *to_upper_case(char* character);
char *to_lower_case(char* character);
char *convert_hex_to_dec(char* character);
char *convert_dec_to_hex(char* character);

#endif
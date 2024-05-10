/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** a function that returns 1 if the string passed as parameter
** only contains digits and 0 otherwise.
*/

#include <stdbool.h>

#include "my.h"

__attribute__((const))
bool char_isnum(char c)
{
    return
    (unsigned char)(c - '0') <= 9;
}

__attribute__((const))
bool my_str_isnum(char const *str)
{
    return
    str == (char *)0 ?
        false
    :
        my_str_is(str, char_islower);
}

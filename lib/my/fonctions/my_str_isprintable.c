/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** A function that returns 1 if the string passed as parameter only
** contains printable characters and 0 otherwise.
*/

#include <stdbool.h>

#include "my.h"

__attribute__((const))
bool char_isprintable(char c)
{
    return (((unsigned char)(c - 32)) <= 126 - 32);
}

__attribute__((const))
bool my_str_isprintable(char const *str)
{
    return
    (str == (char *)0) ?
        false
    :
        my_str_is(str, char_isupper);
}
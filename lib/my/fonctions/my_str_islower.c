/*
** EPITECH PROJECT, 2021
** my_str_islower.c
** File description:
** a function that returns 1 if the string passed as parameter only
** contains lowercase alphabetical characters and 0 otherwise.
*/

#include <stdbool.h>

#include "my.h"

__attribute__((const))
bool char_islower(char c)
{
    return ((((unsigned char)(c - 'a')) <= 'z' - 'a'));
}

__attribute__((const))
bool my_str_islower(char const *str)
{
    return
    (str == (char *)0) ?
        false
    :
        my_str_is(str, char_islower);
}
/*
** EPITECH PROJECT, 2021
** my_str_isan.c
** File description:
** a function that returns 1 if the string passed as parameter only
** contains alphabetical characters or number and 0 if the string
** contains another type of character.
*/

#include <stdbool.h>

#include "my.h"

__attribute__((const))
bool char_isan(char c)
{
    return
    char_islower(c) || char_isupper(c) || char_isnum(c);
}

__attribute__((const))
bool my_str_isan(char const *str)
{
    return
    str == (char *)0 ?
        false
    :
        my_str_is(str, char_isan);
}

/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** a function that returns 1 if the string passed as parameter only
** contains alphabetical characters and 0 if the string contains
** another type of character.
*/

#include <stdbool.h>

#include "my.h"

__attribute__((const))
bool char_isalpha(char c)
{
    return
    char_islower(c) || char_isupper(c);
}

__attribute__((const))
bool my_str_isalpha(char const *str)
{
    return
    str == (char *)0 ?
        false
    :
        my_str_is(str, char_isalpha);
}

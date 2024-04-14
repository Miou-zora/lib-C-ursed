/*
** EPITECH PROJECT, 2021
** my_str_isupper.c
** File description:
** A function that returns 1 if the string passed as parameter only
** contains uppercase alphabetical characters and 0 otherwise.
*/

#include <stdbool.h>

#include "my.h"

__attribute__((const))
bool char_isupper(char c)
{
    return (((unsigned char)(c - 'A')) <= 'Z' - 'A');
}

__attribute__((const))
bool my_str_isupper(char const *str)
{
    return
    (str == (char *)0) ?
        false
    :
        my_str_is(str, char_isupper);
}
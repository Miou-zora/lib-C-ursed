/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** A function that counts and returns the number of
** characters found in the string passed as parameter.
*/

#include <stddef.h>

int my_printf(char const *str, ...);

long r1_my_strlen(char const *str)
{
    return
    *str == '\0' ?
        0
    :
        1 + r1_my_strlen(str+1);
}

long my_strlen(char const *str)
{
    return
    str == NULL ?
        0
    :
        r1_my_strlen(str);
}

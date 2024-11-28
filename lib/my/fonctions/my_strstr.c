/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** The strstr function searches within the string pointed to by s1
** for the string pointed to by s2. It returns a pointer to the
** first occurrence in s1 of s2.
*/

#include <stdbool.h>
#include <stddef.h>

#include "my.h"

static char *r1_my_strstr(char *str , char *to_find, int size_of_to_find)
{
    return
    !*str ?
        NULL
    : my_strncmp(str, to_find, size_of_to_find) == 0 ?
        str
    :
        r1_my_strstr(str + 1, to_find, size_of_to_find);
}

__attribute__((nonnull))
char *my_strstr(char *str , char *to_find)
{
    return
    !*to_find ?
        str
    :
        r1_my_strstr(str, to_find, my_strlen(to_find));
}

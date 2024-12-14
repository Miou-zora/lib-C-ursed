/*
** EPITECH PROJECT, 2021
** my_str_without_char_array.c
** File description:
** A function that returns the string without all space and malloc it.
*/

#include "my.h"

static int count_char(char const *str, char const *array)
{
    return
    *str ?
        is_char_is_that(*str, array) + count_char(str + 1, array)
    :
        0;
}

char *copy_without_char(const char const *str, const char const *array, char *str_return)
{
    return
    *str ?
        is_char_is_that(*str, array) ?
            copy_without_char(str + 1, array, str_return)
        :
            copy_without_char(str + 1, array, (*str_return = *str, str_return + 1)) - 1
    :
        str_return;
}

char *my_str_without_char_array(const char const *str_given, const char const *array)
{
    return
    !str_given ?
        (char *)0
    : !array ?
        my_strdup(str_given)
    :
        copy_without_char(str_given, array, my_calloc(my_strlen(str_given) - count_char(str_given, array) + 1, sizeof(char)));
}
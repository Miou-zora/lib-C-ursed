/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** my_char_is
*/

#include <stdbool.h>

bool my_char_is_that(char c, char const *str)
{
    return ((str == 0) ? false :
    (c == *str) ? true :
    (*str == 0) ? false : my_char_is_that(c, str + 1));
}

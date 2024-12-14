/*
** EPITECH PROJECT, 2021
** my_str_without_space.c
** File description:
** A function that returns the string without all space and malloc it.
*/

#include "my.h"

char *my_str_without_space(const char const *str_given)
{
    return
    my_str_without_char_array(str_given, " ");
}
/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** A function who print a string.
*/

#include <unistd.h>

int my_strlen(char const *str);
int print_error_and_return(const char *error);

int my_putstr(char const *str)
{
    return ((str == NULL) ?
    0 : (*str == 0) ?
    0 : write(1, str, my_strlen(str)) == -1 ?
    84 : 0);
}

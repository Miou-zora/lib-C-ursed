/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** A function who print a string.
*/

#include <unistd.h>

int my_strlen(char const *str);

// return 1 if str is null
// return 2 if first character of str is null
// return 84 if write doesn't works
// return 0 if function works
int my_putstr(char const *str)
{
    return ((str == NULL) ? 1 : (*str == 0) ? 2 : (write(1, str, my_strlen(str)) == -1) ? 84 : 0);
}

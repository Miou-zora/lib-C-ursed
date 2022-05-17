/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** A function that print a character.
*/

#include <unistd.h>

int print_error_and_return(const char *error);

int my_putchar(char c)
{
    return ((c == 0) ?
    84 : write(1, &c, 1) == -1) ?
    84 : 0;
}

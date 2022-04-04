/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** A function who print a string.
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    if (str == NULL)
        return (-1);
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}

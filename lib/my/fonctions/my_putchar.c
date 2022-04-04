/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** A function who print a character.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

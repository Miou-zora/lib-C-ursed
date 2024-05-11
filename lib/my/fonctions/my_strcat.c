/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** A function that concatenates two strings.
*/

#include <stddef.h>

#include "my.h"

__attribute__((const))
char *my_strcat(char *dest, char const *src)
{
    return
    !dest || !src ?
        (char *)0
    :
        dest + (long int)my_strcpy(dest + my_strlen(dest), src) * 0;
}

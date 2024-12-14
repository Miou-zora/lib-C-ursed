/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** A function that concatenates n characters of the src
** string to the end of the dest string.
*/

#include "my.h"

static char *r1_my_strcat(char *dest , char const *src , int nb, int destlen)
{
    return
    my_strncpy(dest + destlen, src, nb) - destlen;
}

char *my_strncat(char *dest , char const *src , int nb)
{
    return
    r1_my_strcat(dest, src, nb, my_strlen(dest));
}
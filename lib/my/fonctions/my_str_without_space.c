/*
** EPITECH PROJECT, 2021
** my_str_without_space.c
** File description:
** A function that returns the string without all space and malloc it.
*/

#include <stdlib.h>

char *my_strdup(char const *src);

char *rm_space(char *str_given)
{
    char *str = my_strdup(str_given);
    char *str_return;
    int decal = 0;
    int i = 0;

    for (; str[i]; i++) {
        str[i - decal] = str[i];
        if (str[i - decal] == ' ') {
            decal = decal + 1;
        }
    }
    for (; str[i - decal]; i++) {
        str[i - decal] = '\0';
    }
    str_return = my_strdup(str);
    free(str);
    return (str_return);
}
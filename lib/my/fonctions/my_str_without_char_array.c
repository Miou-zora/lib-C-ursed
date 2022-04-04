/*
** EPITECH PROJECT, 2021
** my_str_without_char_array.c
** File description:
** A function that returns the string without all space and malloc it.
*/

#include <stdlib.h>

char *my_strdup(char const *src);

int my_strlen(char const *str);

char *my_str_without_char_array(char *str_given, char *array)
{
    char *str = my_strdup(str_given);
    char *str_return;
    int decal = 0;
    int i = 0;

    for (; str[i]; i++) {
        str[i - decal] = str[i];
        for (int j = 0; j < my_strlen(array); j++) {
            (str[i - decal] == array[j]) ? decal = decal + 1 : 0;
        }
    }
    for (; str[i - decal]; i++) {
        str[i - decal] = '\0';
    }
    str_return = my_strdup(str);
    free(str);
    return (str_return);
}
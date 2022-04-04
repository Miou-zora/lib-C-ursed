/*
** EPITECH PROJECT, 2022
** get_len_array
** File description:
** get_len_array
*/

#include <stddef.h>

int get_len_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        i++;
    }
    return (i);
}
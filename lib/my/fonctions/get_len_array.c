/*
** EPITECH PROJECT, 2022
** get_len_array
** File description:
** get_len_array
*/

#include <stddef.h>

unsigned int get_len_array(void *array)
{
    return ((array == NULL) ? 0 : ((*(void **)array) != NULL) ? (1 + get_len_array((((void **)array) + 1))) : 0);
}

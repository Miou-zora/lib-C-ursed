/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_memset
*/

#include <stdlib.h>

void *my_memset(void *ptr, int data, int size)
{
    int8_t *byte_list = ptr;

    for (int i = 0; i < size; i++)
        byte_list[i] = data;
    return (byte_list);
}

/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_calloc
*/

#include <stdlib.h>
#include <stdbool.h>

void *my_memset(void *, int, int);

void *r1_my_calloc(int elem_count, int elem_size, char *ptr, char (*func)(void *))
{
    return (
    (elem_count <= 0 || elem_size <= 0) ?
        NULL
    : ((ptr = malloc(elem_count * elem_size)) == NULL) ?
        NULL
    : (my_memset(ptr, 0, elem_count * elem_size) == NULL) ?
        (func(ptr)) ?
            NULL
        : NULL
    :
        ptr);
}

void *my_calloc(int elem_count, int elem_size)
{
    return (r1_my_calloc(elem_count, elem_size, NULL, (union {void (*freeFn)(void *);char (*freeCharFn)(void *);}){free}.freeCharFn));
}

/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_calloc
*/

#include <stdlib.h>
#include <stdbool.h>

void *my_memset(void *, int, int);
bool function_for_void_function(void(*function)(void *), void *its_a_trap);

void *my_calloc(int elem_count, int elem_size)
{
    void *ptr = NULL;

    return ((elem_count == 0 || elem_size == 0) ?
    NULL : ((ptr = malloc(elem_count * elem_size)) == NULL) ?
    NULL : (my_memset(ptr, 0, elem_count * elem_size) == NULL) ?
        (function_for_void_function(&free, ptr)) ?
        NULL : NULL :
    ptr);
}

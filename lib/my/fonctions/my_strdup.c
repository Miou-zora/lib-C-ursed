/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** A function that allocates memory and copies
** the string given as argument in it.
*/

#include <stdlib.h>

char *my_strcpy(char *dest , char const *src);

void *my_calloc(int elem_count, int elem_size);

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *new = my_calloc(my_strlen(src) + 1, sizeof(*new));

    if (new == NULL) {
        return (NULL);
    }
    new = my_strcpy(new, src);
    return (new);
}

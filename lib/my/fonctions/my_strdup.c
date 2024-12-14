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

char *r1_my_strdup(char const *src, char *return_value) {
    return 
    (return_value = my_calloc(my_strlen(src) + 1, sizeof(*return_value))) == NULL ?
        NULL
    :
        my_strcpy(return_value, src);
}

char *my_strdup(char const *src)
{
    return
    src == NULL ?
        NULL
    :
        r1_my_strdup(src, NULL);
}

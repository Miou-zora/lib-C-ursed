/*
** EPITECH PROJECT, 2022
** git [WSL: Ubuntu]
** File description:
** data_to_array_str
*/

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>

int my_strlen(char const *str);
void *my_calloc(int elem_count, int elem_size);
int my_printf(char const *str, ...);
char *my_strdup(char const *src);

bool is_char_is_that(char c, const char *array)
{
    return ((array == NULL || *array == '\0') ?
    false : (*array == c) ?
    true : (is_char_is_that(c, array + 1)) ?
    true : false);
}

unsigned int number_of_word_start(const char *str, const char *sep)
{
    return ((sep == NULL || str == NULL) ?
    0 : (*str == '\0') ?
    0 : (
        (is_char_is_that(*str, sep)) ?
        1 : 0) + (number_of_word_start(str + 1, sep)));
}

char **data_to_array_str(const char *new, const char *sep)
{
    int len_all = my_strlen(new);
    int tmp = number_of_word_start(new, sep) + 2;
    char **array = my_calloc(tmp, sizeof(*array));
    char *new_dup = NULL;
    int nbr_ptr = 0;
    int i = 0;

    if (!new || !sep)
        return (NULL);
    new_dup = my_strdup(new);
    for (; i < len_all; i++) {
        if (is_char_is_that(new[i], sep)) {
            new_dup[i] = '\0';
        }
    }
    for (i = 0; i < len_all; i++) {
        if (i == 0 || (!new_dup[i - 1] && !is_char_is_that(new_dup[i], sep))) {
            array[nbr_ptr] = my_strdup(&new_dup[i]);
            nbr_ptr = nbr_ptr + 1;
        }
    }
    free(new_dup);
    array[nbr_ptr] = NULL;
    return (array);
}

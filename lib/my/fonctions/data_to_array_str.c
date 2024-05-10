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
char *my_strncpy(char *dest , char const *src , int n);

bool is_char_is_that(char c, const char *array)
{
    return (
    (array == NULL || *array == '\0') ?
        false
    : (*array == c) ?
        true
    : (is_char_is_that(c, array + 1)) ?
        true
    :
        false);
}

unsigned int number_of_word_start(const char *str, const char *sep)
{
    return (
    (sep == NULL || str == NULL) ?
        0
    : (*str == '\0') ?
        0
    :
        ((is_char_is_that(*str, sep)) ?
            1
        :
            0)
        + (number_of_word_start(str + 1, sep)));
}

unsigned int my_strlen_data(const char *str, const char *sep)
{
    return (
    (sep == NULL || str == NULL) ?
        0
    : (*str == '\0' || is_char_is_that(*str, sep)) ?
        0
    :
        1 + my_strlen_data(str + 1, sep));
}

char *my_strdup_data(const char *src, const char *sep)
{
    return (
    (!src || !sep) ?
        NULL
    :
        my_strncpy(my_calloc(my_strlen_data(src, sep) + 1, sizeof(char)), src, my_strlen_data(src, sep)));
}

bool fill_array(const char *new, const char *sep, char **array, unsigned int cursor)
{
    return (
    (!array || !new || !sep) ?
        false
    : !new[cursor] ?
        true
    : (cursor == 0 || (is_char_is_that(new[cursor - 1], sep)) || !new[cursor + 1] && is_char_is_that(new[cursor], sep)) ?
        (array[0] = my_strdup_data(&new[cursor], sep)) ?
            (array = &(array[1])) ?
                ((fill_array(new, sep, array, cursor + 1)) ?
                    true
                :
                    false)
            :
                false
        :
            false
    :
        (fill_array(new, sep, array, cursor + 1)) ?
            true
        :
            false);
}

char **data_to_array_str_with_array(const char *new, const char *sep, char **array)
{
    return (
    (!new || !sep) ?
        NULL
    :
        (fill_array(new, sep, array, 0)) ?
            array
        :
            NULL);
}

char **data_to_array_str(const char *new, const char *sep)
{
    return (
    (!new || !sep) ?
        NULL
    :
        data_to_array_str_with_array(new, sep, my_calloc(number_of_word_start(new, sep) + 2, sizeof(char *))));
}

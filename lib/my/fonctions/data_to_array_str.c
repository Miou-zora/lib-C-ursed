/*
** EPITECH PROJECT, 2022
** git [WSL: Ubuntu]
** File description:
** data_to_array_str
*/

#include <stddef.h>

int my_strlen(char const *str);
void *my_calloc(int elem_count, int elem_size);

int is_char_is_that(char c, char const *array)
{
    int len_array = my_strlen(array);

    for (int i = 0; i < len_array; i++) {
        if (c == array[i]) {
            return (1);
        }
    }
    return (0);
}

int number_of_word_start(char const *str, char *sep)
{
    int len = 0;

    for (int i = 0; str[i]; i++) {
        if (is_char_is_that(str[i], sep))
            len++;
    }
    return (len);
}

char **data_to_array_str(char *new, char *sep)
{
    int len_all = my_strlen(new);
    int tmp = number_of_word_start(new, sep) + 2;
    char **array = my_calloc(tmp, sizeof(*array));
    int nbr_ptr = 0;
    int i = 0;

    for (; i < len_all; i++) {
        if (is_char_is_that(new[i], sep)) {
            new[i] = '\0';
        }
    }
    for (i = 0; i < len_all; i++) {
        if (i == 0 || (!new[i - 1] && !is_char_is_that(new[i], sep))) {
            array[nbr_ptr] = &new[i];
            nbr_ptr = nbr_ptr + 1;
        }
    }
    array[nbr_ptr] = NULL;
    return (array);
}

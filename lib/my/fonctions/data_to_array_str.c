/*
** EPITECH PROJECT, 2022
** git [WSL: Ubuntu]
** File description:
** data_to_array_str
*/

#include <stddef.h>
#include <stdbool.h>

int my_strlen(char const *str);
void *my_calloc(int elem_count, int elem_size);
int my_printf(char const *str, ...);

bool is_char_is_that(char c, char const *array)
{
    return ((array == NULL || *array == '\0') ? false : (*array == c) ? true : (is_char_is_that(c, array + 1)) ? true : false);
}

unsigned int number_of_word_start(char const *str, char *sep)
{
    return ((sep == NULL || str == NULL) ? 0 : (*str == '\0') ? 0 : ((is_char_is_that(*str, sep)) ? 1 : 0) + (number_of_word_start(str + 1, sep)));
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

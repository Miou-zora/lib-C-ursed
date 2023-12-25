/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_calloc
*/

#include <criterion/criterion.h>
#include <stdint.h>
#include <stdio.h>

void *my_calloc(int elem_count, int elem_size);
int my_printf(char const *str, ...);

bool is_all_zero(const void *ptr, size_t size, size_t number_of_element)
{
    size_t number_of_byte = size * number_of_element;
    const uint8_t *nptr = (const uint8_t *)ptr;

    for (size_t cursor = 0; cursor < number_of_byte; cursor++) {
        if (nptr[cursor] != 0)
            return (false);
    }
    return (true);
}

Test(my_calloc, normal_case)
{
    size_t number_of_element = 10;
    short *result = my_calloc(number_of_element, sizeof(*result));

    if (result == NULL)
        return;
    cr_assert(is_all_zero(result, sizeof(*result), number_of_element));
    free(result);
}

Test(my_calloc, no_number_of_element)
{
    size_t number_of_element = 0;
    short *result = my_calloc(number_of_element, sizeof(*result));

    cr_assert(result == NULL);
}

Test(my_calloc, no_size)
{
    size_t number_of_element = 10;
    short *result = my_calloc(number_of_element, 0);

    cr_assert(result == NULL);
}

Test(my_calloc, number_of_element_neg)
{
    size_t number_of_element = -10;
    short *result = my_calloc(number_of_element, sizeof(*result));

    cr_assert(result == NULL);
}

Test(my_calloc, size_neg)
{
    size_t number_of_element = 10;
    short *result = my_calloc(number_of_element, -10);

    cr_assert(result == NULL);
}

Test(my_calloc, double_neg_value)
{
    size_t number_of_element = -10;
    short *result = my_calloc(number_of_element, -10);

    cr_assert(result == NULL);
}


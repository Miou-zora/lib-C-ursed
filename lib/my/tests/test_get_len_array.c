/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_get_len_array
*/

#include <criterion/criterion.h>

unsigned int get_len_array(void *array);
int my_printf(char const *str, ...);

Test(get_len_array, str)
{
    int result = get_len_array("abc");
    int expected = 3;

    my_printf("%i\n", result);

    cr_assert_eq(result, expected);
}

Test(get_len_array, array_int)
{
    int result = get_len_array((int []){1, 2, 3, 4, 0});
    int expected = 4;
    my_printf("%i\n", result);

    cr_assert_eq(result, expected);
}

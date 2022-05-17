/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_strlen
*/

#include <criterion/criterion.h>

int my_strlen(char const *str);

Test(my_strlen, casual)
{
    int result = my_strlen("abc");
    int expected = 3;

    cr_assert_eq(result, expected);
}

Test(my_strlen, str_with_only_one_zero)
{
    int result = my_strlen("\0");
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_strlen, NULL_value)
{
    int result = my_strlen(NULL);
    int expected = 0;

    cr_assert_eq(result, expected);
}

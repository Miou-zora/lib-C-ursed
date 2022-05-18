/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_abs
*/

#include <criterion/criterion.h>

int my_abs(int x);

Test(my_abs, pos)
{
    int result = my_abs(42);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_abs, zero)
{
    int result = my_abs(0);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_abs, neg)
{
    int result = my_abs(-42);
    int expected = 42;

    cr_assert_eq(result, expected);
}

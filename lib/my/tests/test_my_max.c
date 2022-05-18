/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_max
*/

#include <criterion/criterion.h>

int my_max(int a, int b);

Test(my_max, pos_pos_lesser)
{
    int result = my_max(42, 31);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_max, pos_pos_upper)
{
    int result = my_max(42, 101);
    int expected = 101;

    cr_assert_eq(result, expected);
}

Test(my_max, pos_neg_lesser)
{
    int result = my_max(42, -31);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_max, pos_neg_upper)
{
    int result = my_max(42, -101);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_max, neg_pos_lesser)
{
    int result = my_max(-42, 31);
    int expected = 31;

    cr_assert_eq(result, expected);
}

Test(my_max, neg_pos_upper)
{
    int result = my_max(-42, 101);
    int expected = 101;

    cr_assert_eq(result, expected);
}

Test(my_max, neg_neg_lesser)
{
    int result = my_max(-42, -31);
    int expected = -31;

    cr_assert_eq(result, expected);
}

Test(my_max, neg_neg_upper)
{
    int result = my_max(-42, -101);
    int expected = -42;

    cr_assert_eq(result, expected);
}

Test(my_max, zero_zero)
{
    int result = my_max(0, 0);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_max, zero_pos)
{
    int result = my_max(0, 42);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_max, zero_neg)
{
    int result = my_max(0, -42);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_max, pos_zero)
{
    int result = my_max(42, 0);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_max, neg_zero)
{
    int result = my_max(-42, 0);
    int expected = 0;

    cr_assert_eq(result, expected);
}

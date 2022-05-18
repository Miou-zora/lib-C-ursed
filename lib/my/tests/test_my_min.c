/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_min
*/

#include <criterion/criterion.h>

int my_min(int a, int b);

Test(my_min, pos_pos_lesser)
{
    int result = my_min(42, 31);
    int expected = 31;

    cr_assert_eq(result, expected);
}

Test(my_min, pos_pos_upper)
{
    int result = my_min(42, 101);
    int expected = 42;

    cr_assert_eq(result, expected);
}

Test(my_min, pos_neg_lesser)
{
    int result = my_min(42, -31);
    int expected = -31;

    cr_assert_eq(result, expected);
}

Test(my_min, pos_neg_upper)
{
    int result = my_min(42, -101);
    int expected = -101;

    cr_assert_eq(result, expected);
}

Test(my_min, neg_pos_lesser)
{
    int result = my_min(-42, 31);
    int expected = -42;

    cr_assert_eq(result, expected);
}

Test(my_min, neg_pos_upper)
{
    int result = my_min(-42, 101);
    int expected = -42;

    cr_assert_eq(result, expected);
}

Test(my_min, neg_neg_lesser)
{
    int result = my_min(-42, -31);
    int expected = -42;

    cr_assert_eq(result, expected);
}

Test(my_min, neg_neg_upper)
{
    int result = my_min(-42, -101);
    int expected = -101;

    cr_assert_eq(result, expected);
}

Test(my_min, zero_zero)
{
    int result = my_min(0, 0);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_min, zero_pos)
{
    int result = my_min(0, 42);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_min, zero_neg)
{
    int result = my_min(0, -42);
    int expected = -42;

    cr_assert_eq(result, expected);
}

Test(my_min, pos_zero)
{
    int result = my_min(42, 0);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_min, neg_zero)
{
    int result = my_min(-42, 0);
    int expected = -42;

    cr_assert_eq(result, expected);
}

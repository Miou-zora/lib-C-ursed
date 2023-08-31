/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_get_nbrlen
*/

#include <criterion/criterion.h>

unsigned int get_nbrlen(long long nb);

Test(get_nbrlen, pos)
{
    int result = get_nbrlen(999);
    int expected = 3;

    cr_assert_eq(result, expected);
}

Test(get_nbrlen, zero)
{
    int result = get_nbrlen(0);
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(get_nbrlen, neg)
{
    int result = get_nbrlen(-999);
    int expected = 3;

    cr_assert_eq(result, expected);
}

Test(get_nbrlen, little_neg)
{
    int result = get_nbrlen(-1);
    int expected = 1;

    cr_assert_eq(result, expected);
}

Test(get_nbrlen, little_pos)
{
    int result = get_nbrlen(1);
    int expected = 1;

    cr_assert_eq(result, expected);
}

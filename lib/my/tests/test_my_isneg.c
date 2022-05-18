/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_isneg
*/

#include <criterion/criterion.h>

bool my_isneg(int number);

Test(my_isneg, pos)
{
    bool result = my_isneg(1);
    bool expected = false;

    cr_assert_eq(result, expected);
}

Test(my_isneg, neg)
{
    bool result = my_isneg(-1);
    bool expected = true;

    cr_assert_eq(result, expected);
}

Test(my_isneg, zero)
{
    bool result = my_isneg(0);
    bool expected = false;

    cr_assert_eq(result, expected);
}

/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_my_is_prime
*/

#include <criterion/criterion.h>

bool my_is_prime(unsigned int nb);

Test(my_is_prime, should_return_false)
{
    unsigned int nb = 0;
    bool expected = false;

    bool result = my_is_prime(nb);

    cr_assert_eq(result, expected);
}

Test(my_is_prime, should_return_false_2)
{
    unsigned int nb = 1;
    bool expected = false;

    bool result = my_is_prime(nb);

    cr_assert_eq(result, expected);
}

Test(my_is_prime, should_return_true)
{
    unsigned int nb = 2;
    bool expected = true;

    bool result = my_is_prime(nb);

    cr_assert_eq(result, expected);
}

Test(my_is_prime, should_return_true_2)
{
    unsigned int nb = 3;
    bool expected = true;

    bool result = my_is_prime(nb);

    cr_assert_eq(result, expected);
}

Test(my_is_prime, should_return_false_3)
{
    unsigned int nb = 4;
    bool expected = false;

    bool result = my_is_prime(nb);

    cr_assert_eq(result, expected);
}

Test(my_is_prime, negative_value)
{
    unsigned int nb = -4;
    bool expected = false;

    bool result = my_is_prime(nb);

    cr_assert_eq(result, expected);
}



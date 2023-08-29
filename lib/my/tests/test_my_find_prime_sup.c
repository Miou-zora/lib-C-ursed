/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_my_find_prime_sup
*/

#include <criterion/criterion.h>

int my_find_prime_sup(int nb);

Test(my_find_prime_sup, basic)
{
    unsigned int nb = 14;
    unsigned int expected = 17;

    unsigned int result = my_find_prime_sup(nb);

    cr_assert_eq(result, expected);
}

Test(my_find_prime_sup, zero)
{
    unsigned int nb = 0;
    unsigned int expected = 2;

    unsigned int result = my_find_prime_sup(nb);

    cr_assert_eq(result, expected);
}

Test(my_find_prime_sup, one)
{
    unsigned int nb = 1;
    unsigned int expected = 2;

    unsigned int result = my_find_prime_sup(nb);

    cr_assert_eq(result, expected);
}

Test(my_find_prime_sup, two)
{
    unsigned int nb = 2;
    unsigned int expected = 2;

    unsigned int result = my_find_prime_sup(nb);

    cr_assert_eq(result, expected);
}

/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_compute_square_root
*/

#include <criterion/criterion.h>
#include <math.h>

int my_compute_square_root(int nb);

Test(my_compute_square_root, pos)
{
    int result = my_compute_square_root(16);
    int expected = 4;

    cr_assert(result == expected);
}

Test(my_compute_square_root, zero)
{
    int result = my_compute_square_root(0);
    int expected = 0;

    cr_assert(result == expected);
}

Test(my_compute_square_root, neg)
{
    int result = my_compute_square_root(-16);
    int expected = -1;

    cr_assert(result == expected);
}

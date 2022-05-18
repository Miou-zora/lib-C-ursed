/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_compute_power_rec
*/

#include <criterion/criterion.h>
#include <math.h>

float my_compute_power_rec(float nb , int power);

bool compare_float_equal(float a, float b, float epsilon)
{
    return fabs(a - b) < epsilon;
}

Test(my_compute_power_rec, pos_pos)
{
    float result = my_compute_power_rec(3.4, 4);
    float expected = 133.6336;

    cr_assert(compare_float_equal(result, expected, 0.001));
}

Test(my_compute_power_rec, pos_neg)
{
    float result = my_compute_power_rec(3.4, -2);
    float expected = 0.086505;

    cr_assert(compare_float_equal(result, expected, 0.001));
}

Test(my_compute_power_rec, neg_neg)
{
    float result = my_compute_power_rec(-3.4, -2);
    float expected = 0.0865;

    cr_assert(compare_float_equal(result, expected, 0.001));
}

Test(my_compute_power_rec, zero_pos)
{
    float result = my_compute_power_rec(0, 4);
    float expected = 0.f;

    cr_assert(compare_float_equal(result, expected, 0.001));
}

Test(my_compute_power_rec, pos_zero)
{
    float result = my_compute_power_rec(3.4, 0);
    float expected = 1.f;

    cr_assert(compare_float_equal(result, expected, 0.001));
}

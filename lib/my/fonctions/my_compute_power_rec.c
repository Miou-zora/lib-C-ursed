/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** A function that returns the first argument raised to the power p,
** where p is the second argument.
*/

float my_compute_power_rec(float nb , int power)
{
    return ((power == 0) ?
    1 : (power > 0) ?
    (nb * my_compute_power_rec(nb, power - 1)) : (((1.f / nb) * my_compute_power_rec(nb, power + 1))));
}

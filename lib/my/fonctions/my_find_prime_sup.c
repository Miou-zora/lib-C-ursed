/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** A function that returns the smallest prime number
** that is greater than, or equal to, the number given
** as a parameter.
*/

int my_is_prime(int);

unsigned int my_find_prime_sup(unsigned int nb)
{
    return (
    (my_is_prime(nb) != 0) ?
        nb
    :
        my_find_prime_sup(nb + 1));
}

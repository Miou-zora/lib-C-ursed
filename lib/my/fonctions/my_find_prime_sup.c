/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** A function that returns the smallest prime number
** that is greater than, or equal to, the number given
** as a parameter.
*/

int my_is_prime(int);

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0) {
        nb = nb + 1;
    }
    return (nb);
}

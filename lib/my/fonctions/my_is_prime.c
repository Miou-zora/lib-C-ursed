/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** A function that returns 1 if the number is prime and 0 if not.
*/

#include <stdbool.h>

static bool check_prime(unsigned int nb, unsigned int start, unsigned int end)
{
    return 
    (start <= end) ?
        (nb % start == 0) ?
            false
        :
            check_prime(nb, start + 1, end)
    :
        true;
}

bool my_is_prime(unsigned int nb)
{
    return 
    (nb <= 1) ?
        false
    :
        check_prime(nb, 2, nb / 4 + 1);
}

/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** A function that returns 1 if the number is prime and 0 if not.
*/

unsigned int my_is_prime(unsigned int nb)
{
    unsigned int end = nb / 4 + 1;

    if (nb <= 1) {
        return (0);
    }
    for (unsigned int start = 2; start <= end; start++) {
        if (nb % start == 0) {
            return (0);
        }
    }
    return (1);
}

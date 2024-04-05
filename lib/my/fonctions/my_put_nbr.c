/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** A function that print a number.
*/

#include <stdbool.h>

int my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_abs(int x);
unsigned int get_nbrlen(long long nb);

static
char modulo(long long a, long long b)
{
    return (a - (a / b) * b);
}

static
char *fill_str(char *nbr_to_print, long long nbr) {
    return (
    (nbr != 0) ?
        fill_str(((*nbr_to_print) = my_abs(modulo(nbr, 10)) + '0') * 0 + nbr_to_print + 1, nbr / 10)
    : nbr_to_print);
}

int my_put_nbr(long long nbr)
{
    char nbr_to_print[23] = {0};

    return (
    (nbr == 0) ?
        (my_putchar('0'))
    : (my_putstr(my_revstr(((long)fill_str(nbr_to_print + ((nbr < 0) ? nbr_to_print[get_nbrlen(nbr)] = '-' : 0) * 0 , nbr)) * 0 + nbr_to_print))));
}

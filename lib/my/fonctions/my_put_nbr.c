/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** A function who print a number.
*/

#include <stdbool.h>

int my_putchar(char c);

int my_putstr(char const *str);
char *my_revstr(char *str);

int my_abs(int x);

unsigned int get_nbrlen(long long nb);

// int my_put_nbr(long long nb)
// {
//     long long max = 1;
//     long long number = nb;

//     if (number == 0) {
//         my_putchar('0');
//     }
//     if (number < 0) {
//         my_putchar('-');
//         number = - number;
//     }
//     while (number / max != 0) {
//         max = max * 10;
//     }
//     while (max != 1) {
//         number = number - number / max * max;
//         max = max / 10;
//         my_putchar(number / max + 48);
//     }
//     return (1);
// }

static char modulo(long long a, long long b)
{
    return (a - (a / b) * b);
}



int my_put_nbr(long long nbr)
{
    char nbr_to_print[23] = {0};
    int index = 0;

    if (nbr == 0)
        return (my_putchar('0'));
    if (nbr < 0) {
        nbr_to_print[get_nbrlen(nbr)] = '-';
    }
    while (nbr != 0) {
        nbr_to_print[index] = my_abs(modulo(nbr, 10)) + '0';
        nbr = nbr / 10;
        index++;
    }
    return (my_putstr(my_revstr(nbr_to_print)));
}

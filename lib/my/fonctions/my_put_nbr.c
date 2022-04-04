/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** A function who print a number.
*/

int my_putchar(char c);

int my_put_nbr(long long nb)
{
    long long max = 1;
    long long number = nb;

    if (number == 0) {
        my_putchar('0');
    }
    if (number < 0) {
        my_putchar('-');
        number = - number;
    }
    while (number / max != 0) {
        max = max * 10;
    }
    while (max != 1) {
        number = number - number / max * max;
        max = max / 10;
        my_putchar(number / max + 48);
    }
    return (1);
}

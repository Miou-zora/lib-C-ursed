/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** A function that displays either Nif the integer passed as
** parameter is negative or P, if positive or null.
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}

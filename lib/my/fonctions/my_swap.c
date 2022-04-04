/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** A function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

void my_putchar(char);

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

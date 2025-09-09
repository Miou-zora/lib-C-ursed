/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    // Test my_swap first
    int a = 5, b = 2;
    my_putstr("Before swap: a=");
    my_put_nbr(a);
    my_putstr(", b=");
    my_put_nbr(b);
    my_putchar('\n');
    
    my_swap(&a, &b);
    my_putstr("After swap: a=");
    my_put_nbr(a);
    my_putstr(", b=");
    my_put_nbr(b);
    my_putchar('\n');
    
    // Test my_sort_int_array
    int array[] = {5, 2, 8, 1, 9};
    int size = 5;
    
    my_putstr("Original array: ");
    for (int i = 0; i < size; i++) {
        my_put_nbr(array[i]);
        my_putchar(' ');
    }
    my_putchar('\n');
    
    my_sort_int_array(array, size);
    
    my_putstr("Sorted array: ");
    for (int i = 0; i < size; i++) {
        my_put_nbr(array[i]);
        my_putchar(' ');
    }
    my_putchar('\n');

    return (0);
}

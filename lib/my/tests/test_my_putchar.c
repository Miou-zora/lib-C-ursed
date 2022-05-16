/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_putchar
*/

#include <criterion/criterion.h>
void my_putchar(char c);

Test(my_putchar, casual)
{
    my_putchar('a');
}

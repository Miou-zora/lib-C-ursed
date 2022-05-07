/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    if (is_char_is_that('c', "zace")) {
        my_putstr("yes");
    } else {
        my_putstr("no");
    }
    return (0);
}

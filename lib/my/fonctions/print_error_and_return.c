/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** print_error_and_return
*/

#include <unistd.h>

int my_strlen(const char *str);

int print_error_and_return(const char *error)
{
    write(2, error, my_strlen(error));
    return (84);
}

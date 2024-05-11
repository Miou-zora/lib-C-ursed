/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** A function that puts every letter of every word in it in lowercase.
*/

#include <stdbool.h>

int my_put_nbr(int nb);
__attribute__((const))
bool char_isupper(char c);

__attribute__((const, nonnull))
static char char_to_lower(char c)
{
    return c + 32;
}

__attribute__((const, nonnull))
static char *my_str_to(char *str, bool (*test)(char), char (*conv)(char))
{
    return
    !*str ?
        str
    : test(*str) ?
        (char *)((long)my_str_to(str + 1, test, conv) - 1 + (*str = conv(*str)) * 0)
    :
        my_str_to(str + 1, test, conv) - 1;
}



char *my_strlowcase(char *str)
{
    return
    !str ?
        str
    :
        my_str_to(str, char_isupper, char_to_lower);
}

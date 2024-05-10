/*
** EPITECH PROJECT, 2021
** my_str_is
** File description:
**
*/

#include <stdbool.h>

__attribute__((const, nonnull))
bool my_str_is(char const *str, bool (*f)(char))
{
    return
    f(*str) ?
        my_str_is(str + 1, f)
    :
        *str == '\0';
}

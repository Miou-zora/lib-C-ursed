/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** a function that returns 1 if the string passed as parameter
** only contains digits and 0 otherwise.
*/

int my_str_isnum(char const *str)
{
    if (!str[0])
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            return (0);
        }
    }
    return (1);
}

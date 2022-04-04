/*
** EPITECH PROJECT, 2021
** my_str_islower.c
** File description:
** a function that returns 1 if the string passed as parameter only
** contains lowercase alphabetical characters and 0 otherwise.
*/

int my_str_islower(char const *str)
{
    if (!str[0])
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z')) {
            return (0);
        }
    }
    return (1);
}

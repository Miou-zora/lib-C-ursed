/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** A function that returns 1 if the string passed as parameter only
** contains printable characters and 0 otherwise.
*/

int my_str_isprintable(char const *str)
{
    if (!str[0])
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 32 && str[i] <= 126)) {
            return (0);
        }
    }
    return (1);
}

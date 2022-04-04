/*
** EPITECH PROJECT, 2021
** my_str_isupper.c
** File description:
** A function that returns 1 if the string passed as parameter only
** contains uppercase alphabetical characters and 0 otherwise.
*/

int my_str_isupper(char const *str)
{
    if (!str[0])
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 'A' && str[i] <= 'Z')) {
            return (0);
        }
    }
    return (1);
}
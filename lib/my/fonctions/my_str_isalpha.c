/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** a function that returns 1 if the string passed as parameter only
** contains alphabetical characters and 0 if the string contains
** another type of character.
*/

int my_str_isalpha(char const *str)
{
    if (!str[0])
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z'))) {
            return (0);
        }
    }
    return (1);
}

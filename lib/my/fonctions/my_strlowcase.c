/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** A function that puts every letter of every word in it in lowercase.
*/

int my_put_nbr(int nb);

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}

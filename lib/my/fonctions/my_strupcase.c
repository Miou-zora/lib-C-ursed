/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** A function that puts every letter of every word in it in uppercase.
*/

int my_put_nbr(int nb);

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}

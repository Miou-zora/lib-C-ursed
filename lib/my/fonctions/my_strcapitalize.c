/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** A function that capitalizes the first letter of each word.
*/

int char_l(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int char_u(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int char_n(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

char char_an(char c)
{
    if (char_l(c) || char_u(c) || char_n(c))
        return (1);
    return (0);
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i]; i++) {
        char d = str[i - 1];
        if ((!d && char_l(str[i])) || (!char_an(d) && char_l(str[i])))
            str[i] -= 32;
        else if ((char_l(d) || char_n(d)) && char_u(str[i]))
            str[i] += 32;
    }
    return (str);
}

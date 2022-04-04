/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-alexandre.franquet [WSL: Ubuntu]
** File description:
** my_convert_base
*/

char *my_revstr(char *str);

void *my_calloc(int elem_count, int elem_size);

int my_strlen(char const *str);

int get_nblen(int number, int blen)
{
    int i = 1;
    while (number) {
        number = number / blen;
        i += 1;
    }
    return (i);
}

char *convert_base(long long number, char *base)
{
    int blen = my_strlen(base);
    char *new_base = my_calloc(get_nblen(number, blen) + 1, sizeof(char *));

    for (int i = 0; number; i++) {
        new_base[i] = base[number % blen];
        number = number / blen;
    }
    new_base = my_revstr(new_base);
    return (new_base);
}

char *convert_octa(int nbr)
{
    char *str = my_calloc(3, sizeof(char *));

    str[0] = '0';
    str[1] = '0';
    str[2] = '0';
    for (int i = 0; nbr; i++) {
        str[2 - i] = nbr % 8 + '0';
        nbr = nbr / 8;
    }
    return (str);
}
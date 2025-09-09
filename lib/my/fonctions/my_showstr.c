/*
** EPITECH PROJECT, 2021
** my_showstr.c
** File description:
** my_showstr - display string with non-printable chars as octal
*/

int my_putchar(char c);

int r2_print_octal(unsigned char c, int pos)
{
    return
    pos >= 3 ?
        0
    : (my_putchar('0' + ((c >> (3 * (2 - pos))) & 7)), 
       r2_print_octal(c, pos + 1));
}

int r1_my_showstr(char const *str, int pos)
{
    return
    str[pos] == '\0' ?
        0
    : str[pos] >= 32 && str[pos] <= 126 ?
        (my_putchar(str[pos]), r1_my_showstr(str, pos + 1))
    : (my_putchar('\\'), r2_print_octal((unsigned char)str[pos], 0), 
       r1_my_showstr(str, pos + 1));
}

int my_showstr(char const *str)
{
    return
    str == ((void *)0) ?
        0
    :
        r1_my_showstr(str, 0);
}

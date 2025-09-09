/*
** EPITECH PROJECT, 2021
** my_showmem.c
** File description:
** my_showmem - display memory content in hexadecimal
*/

int my_putchar(char c);
int my_put_nbr(long long nb);

int r3_print_hex_byte(unsigned char byte, int pos)
{
    return
    pos >= 2 ?
        0
    : (my_putchar("0123456789abcdef"[(byte >> (4 * (1 - pos))) & 0xF]), 
       r3_print_hex_byte(byte, pos + 1));
}

int r2_print_hex_line(char const *str, int pos, int size)
{
    return
    pos >= 16 ?
        0
    : pos < size ?
        (r3_print_hex_byte((unsigned char)str[pos], 0), my_putchar(' '), 
         r2_print_hex_line(str, pos + 1, size))
    : (my_putchar(' '), my_putchar(' '), my_putchar(' '), 
       r2_print_hex_line(str, pos + 1, size));
}

int r2_print_char_line(char const *str, int pos, int size)
{
    return
    pos >= size || pos >= 16 ?
        0
    : (my_putchar(str[pos] >= 32 && str[pos] <= 126 ? str[pos] : '.'), 
       r2_print_char_line(str, pos + 1, size));
}

int r1_my_showmem(char const *str, int size, int offset)
{
    return
    size <= 0 ?
        0
    : (my_put_nbr(offset), my_putchar(':'), my_putchar(' '),
       r2_print_hex_line(str, 0, size > 16 ? 16 : size),
       my_putchar(' '), r2_print_char_line(str, 0, size > 16 ? 16 : size),
       my_putchar('\n'), 
       r1_my_showmem(str + 16, size - 16, offset + 16));
}

int my_showmem(char const *str, int size)
{
    return
    str == ((void *)0) || size <= 0 ?
        0
    :
        r1_my_showmem(str, size, 0);
}

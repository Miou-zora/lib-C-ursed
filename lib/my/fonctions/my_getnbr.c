/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** my_getnbr
*/

#include <stdbool.h>

static bool is_char_number(unsigned char c)
{
    return ((unsigned char)(c - '0')) <= 9;
}

static const char *get_pos_first_number(const char *str, bool *neg)
{
    return 
    (!(!(is_char_number(*str)) && *str)) ?
        str
    :
        get_pos_first_number(str + 1, neg + (*neg = *str == '-') * 0);
}

static long long convert_to_number(const char *str, long long number)
{
    return
    (is_char_number(*str)) ?
        convert_to_number(str + 1, number * 10 + *str - '0')
    :
        number;
}

static long long my_getnbr_neg(const char *str, bool neg)
{
    return
    (!is_char_number(*(str = get_pos_first_number(str, &neg)))) ?
        -1
    :
        (-neg * 2 + 1) * convert_to_number(str, 0);
}

long long my_getnbr(const char *str)
{
    return my_getnbr_neg(str, false);
}


/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** A function that puts every letter of every word in it in uppercase.
*/

#include <stdbool.h>

__attribute__((const))
bool char_islower(char c);

char *r1_my_strupcase(char *str)
{
    return
    *str ?
        char_islower(*str) ?
            (*str -= ('a' - 'A')) * 0 + r1_my_strupcase(str+1) - 1
        :  
            r1_my_strupcase(str+1) - 1
    :
        str;
}

char *my_strupcase(char *str)
{
    return
    !str ?
        str
    :
        r1_my_strupcase(str);
}

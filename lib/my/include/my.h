/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Contains the prototypes of all the functions exposed by my 'libmy.a'.
*/

#pragma once

#include <stdbool.h>

int my_swap(int *, int *);
char *my_strupcase(char *);
__attribute__((nonnull))
char *my_strstr(char *, char *);
char *my_strncpy(char *, char const *, int);
int my_strncmp(char const *, char const *, int);
char *my_strncat(char *, char const *, int);
char *my_strlowcase(char *);
int my_strlen(char const *);
__attribute__((const))
bool my_str_isupper(char const *str);
__attribute__((const))
bool my_str_isprintable(char const *str);
__attribute__((const))
bool my_str_isnum(char const *str);
__attribute__((const))
bool my_str_islower(char const *str);
__attribute__((const))
bool my_str_isalpha(char const *str);
char *my_strcpy(char *, char const *);
int my_strcmp(char const *, char const *);
__attribute__((const))
char *my_strcat(char *dest, char const *src);
char *my_strcapitalize(char *);
void my_sort_int_array(int *, int);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_revstr(char *);
int my_putstr(char const *);
int my_put_nbr(long long);
int my_putchar(char c);
int my_is_prime(int);
bool my_isneg(int number);
int my_getnbr(char const *);
int my_find_prime_sup(int);
int my_compute_square_root(int);
float my_compute_power_rec(float nb , int power);
int my_max(int, int);
int my_min(int, int);
int my_abs(int);
char *rm_space(char *);
char *my_strdup(char const *);
char *my_str_without_char_array(const char *str_given, const char *array);
char *my_str_without_space(const char *str_given);
void *my_calloc(int, int);
void *my_memset(void *, int, int);
char *my_itoa(int);
unsigned int get_nbrlen(int);
int get_nblen(int number, int blen);
int my_printf(char const *str, ...);
char **data_to_array_str(char *str, char *sep);
unsigned int get_len_array(void *array);
bool is_char_is_that(char c, char const *array);
unsigned int number_of_word_start(char const *str, char *sep);
char *convert_octa(int nbr);
int print_error_and_return(const char *error);

__attribute__((const, nonnull))
bool my_str_is(char const *str, bool (*f)(char));

__attribute__((const))
bool char_islower(char c);

__attribute__((const))
bool char_isupper(char c);

__attribute__((const))
bool char_isnum(char c);

__attribute__((const))
bool char_isprintable(char c);

__attribute__((const))
bool char_isalpha(char c);

__attribute__((const))
bool char_isan(char c);

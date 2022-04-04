/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Contains the prototypes of all the functions exposed by my 'libmy.a'.
*/

#ifndef MY_H_
    #define MY_H_

    void my_swap(int *, int *);
    char *my_strupcase(char *);
    char *my_strstr(char *, char const *);
    char *my_strncpy(char *, char const *, int);
    int my_strncmp(char const *, char const *, int);
    char *my_strncat(char *, char const *, int);
    char *my_strlowcase(char *);
    int my_strlen(char const *);
    int my_str_isupper(char const *);
    int my_str_isprintable(char const *);
    int my_str_isnum(char const *);
    int my_str_islower(char const *);
    int my_str_isalpha(char const *);
    char *my_strcpy(char *, char const *);
    int my_strcmp(char const *, char const *);
    char *my_strcat(char *, char *);
    char *my_strcapitalize(char *);
    void my_sort_int_array(int *, int);
    int my_showstr(char const *);
    int my_showmem(char const *, int);
    char *my_revstr(char *);
    int my_putstr(char const *);
    int my_put_nbr(long long);
    void my_putchar(char);
    int my_is_prime(int);
    int my_isneg(int);
    int my_getnbr(char const *);
    int my_find_prime_sup(int);
    int my_compute_square_root(int);
    int my_compute_power_rec(int, int);
    int my_max(int, int);
    int my_min(int, int);
    int my_abs(int);
    char *rm_space(char *);
    int my_str_isalpha(char const *);
    char *my_strdup(char const *);
    char *my_str_without_char_array(char *, char *);
    void *my_calloc(int, int);
    void *my_memset(void *, int, int);
    char *my_itoa(int);
    int get_nbrlen(int);
    int my_printf(char const *str, ...);
    char **data_to_array_str(char *new, char *sep);
    int get_len_array(char **array);

#endif/* !MY_H_ */

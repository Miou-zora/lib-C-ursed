/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_my_put_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include <limits.h>
void *my_calloc(int elem_count, int elem_size);

int my_put_nbr(long long nb);
unsigned int get_nbrlen(long long nb);

Test(my_put_nbr, should_print_42)
{
    cr_redirect_stdout();
    my_put_nbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_put_nbr, should_print_0)
{
    cr_redirect_stdout();
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, should_print_1)
{
    cr_redirect_stdout();
    my_put_nbr(1);
    cr_assert_stdout_eq_str("1");
}

Test(my_put_nbr, should_print_minus42)
{
    cr_redirect_stdout();
    my_put_nbr(-42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_put_nbr, max_long_long_value)
{
    cr_redirect_stdout();
    char *str = my_calloc(1, get_nbrlen(LLONG_MAX) + 2);
    sprintf(str, "%lld", LLONG_MAX);
    my_put_nbr(LLONG_MAX);
    cr_assert_stdout_eq_str(str);
    free(str);
}

Test(my_put_nbr, min_long_long_value)
{
    cr_redirect_stdout();
    char *str = my_calloc(1, get_nbrlen(LLONG_MIN) + 2);
    sprintf(str, "%lld", LLONG_MIN);
    my_put_nbr(LLONG_MIN);
    cr_assert_stdout_eq_str(str);
    free(str);
}

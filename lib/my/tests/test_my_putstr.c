/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_putstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putstr(const char *str);

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putstr, casual, .init=redirect_all_stdout)
{
    int result = my_putstr("abc");
    int expected = 0;

    cr_assert_eq(result, expected);
    cr_assert_stdout_eq_str("abc");
}

Test(my_putstr, print_zero, .init=redirect_all_stdout)
{
    int result = my_putstr("\0");
    int expected = 0;

    cr_assert_eq(result, expected);
}

Test(my_putstr, NULL_value, .init=redirect_all_stdout)
{
    int result = my_putstr(NULL);
    int expected = 0;

    cr_assert_eq(result, expected);
}

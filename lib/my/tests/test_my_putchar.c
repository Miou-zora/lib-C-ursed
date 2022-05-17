/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_putchar
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putchar(char c);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putchar, casual, .init=redirect_all_stdout)
{
    int result = my_putchar('a');
    int expected = 0;

    cr_assert_eq(result, expected);
    cr_assert_stdout_eq_str("a");
}

Test(my_putchar, print_zero, .init=redirect_all_stdout)
{
    int result = my_putchar('\0');
    int expected = 84;

    cr_assert_eq(result, expected);
}

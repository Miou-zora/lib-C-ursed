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
    my_putchar('a');

    cr_assert_stdout_eq_str("a");
    my_putchar('\0');
}

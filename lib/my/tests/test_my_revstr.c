/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, casual)
{
    char str[] = "abc";
    char *result = my_revstr(str);
    char expected[] = "cba";
    cr_assert_str_eq(result, expected);
}

Test(my_revstr, casual_pair)
{
    char str[] = "abcd";
    char *result = my_revstr(str);
    char expected[] = "dcba";
    printf("result: %c%c%c%c\n", result[0], result[1], result[2], result[3]);
    cr_assert_str_eq(result, expected);
}

Test(my_revstr, empty_str)
{
    char str[] = "";
    char *result = my_revstr(str);
    char expected[] = "";
    cr_assert_str_eq(result, expected);
}

Test(my_revstr, null_case)
{
    char *result = my_revstr(NULL);
    cr_assert_null(result);
}

Test(my_revstr, one_char)
{
    char str[] = "a";
    char *result = my_revstr(str);
    char expected[] = "a";
    cr_assert_str_eq(result, expected);
}

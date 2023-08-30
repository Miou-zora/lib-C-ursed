/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_my_getnbr
*/

#include <criterion/criterion.h>

long long my_getnbr(char const *str);

Test(my_getnbr, should_return_0)
{
    char *str = "0";
    long long expected = 0;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, should_return_1)
{
    char *str = "1";
    long long expected = 1;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, should_return_10)
{
    char *str = "10";
    long long expected = 10;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, should_return_1234567890)
{
    char *str = "1234567890";
    long long expected = 1234567890;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, error_case)
{
    char *str = "a";
    long long expected = -1;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, negative_value)
{
    char *str = "-1";
    long long expected = -1;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, negative_value_with_positive_value)
{
    char *str = "1-69";
    long long expected = 1;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, text_before)
{
    char *str = "aaezeaea(*%%&_-69";
    long long expected = -69;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, text_after)
{
    char *str = "-69aaezeaea(*%%&_";
    long long expected = -69;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, text_before_and_after)
{
    char *str = "aaezeaea(*%%&_-69aaezeaea(*%%&_";
    long long expected = -69;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, max_int_value)
{
    char *str = "2147483647";
    long long expected = 2147483647;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, min_int_value)
{
    char *str = "-2147483648";
    long long expected = -2147483648;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

Test(my_getnbr, minus_before)
{
    char *str = "-+69";
    long long expected = 69;

    long long result = my_getnbr(str);

    cr_assert_eq(result, expected);
}

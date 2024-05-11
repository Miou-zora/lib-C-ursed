#include <criterion/criterion.h>

char *my_strlowcase(char *str);


Test(my_strlowcase, casual)
{
    char str[] = "Hello World!";
    char *result = my_strlowcase(str);
    char *expected = "hello world!";
    cr_assert_str_eq(result, expected);
}

Test(my_strlowcase, null)
{
    char *result = my_strlowcase(NULL);
    cr_assert_eq(result, NULL);
}

Test(my_strlowcase, empty)
{
    char str[] = "";
    char *result = my_strlowcase(str);
    char *expected = "";
    cr_assert_str_eq(result, expected);
}

Test(my_strlowcase, all_upper)
{
    char str[] = "HELLO WORLD!";
    char *result = my_strlowcase(str);
    char *expected = "hello world!";
    cr_assert_str_eq(result, expected);
}

Test(my_strlowcase, all_lower)
{
    char str[] = "hello world!";
    char *result = my_strlowcase(str);
    char *expected = "hello world!";
    cr_assert_str_eq(result, expected);
}

Test(my_strlowcase, mixed)
{
    char str[] = "HeLLo WoRLd!";
    char *result = my_strlowcase(str);
    char *expected = "hello world!";
    cr_assert_str_eq(result, expected);
}

Test(my_strlowcase, special_chars)
{
    char str[] = "HeLLo WoRLd!@#$%^&*()_+";
    char *result = my_strlowcase(str);
    char *expected = "hello world!@#$%^&*()_+";
    cr_assert_str_eq(result, expected);
}

Test(my_strlowcase, numbers)
{
    char str[] = "HeLLo WoRLd!1234567890";
    char *result = my_strlowcase(str);
    char *expected = "hello world!1234567890";
    cr_assert_str_eq(result, expected);
}

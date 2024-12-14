/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_str_without_space
*/

#include <criterion/criterion.h>

#include "my.h"

Test(my_str_without_space, no_space)
{
    char *result = my_str_without_space("HelloWorld");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space)
{
    char *result = my_str_without_space("Hello World");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space_start)
{
    char *result = my_str_without_space(" HelloWorld");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space_end)
{
    char *result = my_str_without_space("HelloWorld ");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space_start_end)
{
    char *result = my_str_without_space(" HelloWorld ");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space_multiple)
{
    char *result = my_str_without_space(" Hello World ");
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space_multiple_start_end)
{
    char *result = my_str_without_space(" Hello World Hello ");
    char *expected = "HelloWorldHello";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, with_space_multiple_start_end_middle)
{
    char *result = my_str_without_space("   H  ello     World  Hello   World    ");
    char *expected = "HelloWorldHelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_str_without_space, NULL_str)
{
    char *result = my_str_without_space(NULL);
    char *expected = NULL;

    cr_assert_eq(result, expected);
}

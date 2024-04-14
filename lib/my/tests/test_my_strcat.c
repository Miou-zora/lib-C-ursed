/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** test_my_strcat
*/

#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);

Test(my_strcat, casual)
{
    char dest[6 + 5] = "Hello";
    char src[] = "World";
    char *result = my_strcat(dest, src);
    char *expected = "HelloWorld";

    cr_assert_str_eq(result, expected);
}

Test(my_strcat, empty_dest)
{
    char dest[1 + 5] = "";
    char src[] = "World";
    char *result = my_strcat(dest, src);
    char *expected = "World";

    cr_assert_str_eq(result, expected);
}

Test(my_strcat, empty_src)
{
    char dest[5 + 1] = "Hello";
    char src[] = "";
    char *result = my_strcat(dest, src);
    char *expected = "Hello";

    cr_assert_str_eq(result, expected);
}

Test(my_strcat, empty_dest_and_src)
{
    char dest[1 + 1] = "";
    char src[] = "";
    char *result = my_strcat(dest, src);
    char *expected = "";

    cr_assert_str_eq(result, expected);
}

Test(my_strcat, NULL_dest)
{
    char *dest = NULL;
    char src[] = "World";
    char *result = my_strcat(dest, src);
    char *expected = NULL;

    cr_assert_eq(result, expected);
}

Test(my_strcat, NULL_src)
{
    char dest[5 + 1] = "Hello";
    char *src = NULL;
    char *result = my_strcat(dest, src);
    char *expected = NULL;

    cr_assert_eq(result, expected);
}

Test(my_strcat, NULL_dest_and_src)
{
    char *dest = NULL;
    char *src = NULL;
    char *result = my_strcat(dest, src);
    char *expected = NULL;

    cr_assert_eq(result, expected);
}

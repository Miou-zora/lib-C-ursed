// Test my_strncpy

#include <criterion/criterion.h>

#include "my.h"

Test(my_strncpy, same_string)
{
    char destmy[20] = {0};
    char dest[20] = {0};
    char *result = my_strncpy(destmy, "HelloWorld", 20);
    char *expected = strncpy(dest, "HelloWorld", 20);

    cr_assert_str_eq(result, expected);
}

Test(my_strncpy, same_string_different_size_over)
{
    int size = 5;
    char destmy[12] = {0};
    char dest[12] = {0};
    char *result = my_strncpy(destmy, "Hell", size);
    char *expected = strncpy(dest, "Hell", size);

    cr_assert_str_eq(result, expected);
}

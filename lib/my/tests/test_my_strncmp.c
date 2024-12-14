// Test my_strncmp

#include <criterion/criterion.h>

#include "my.h"

Test(my_strncmp, same_string)
{
    int result = my_strncmp("HelloWorld", "HelloWorld", 20);
    int expected = strncmp("HelloWorld", "HelloWorld", 20);

    cr_assert_eq(result, expected);
}

Test(my_strncmp, same_string_different_size_over)
{
    int result = my_strncmp("HelloWorld", "HelloWorldazeazeezeazeaezae", 5);
    int expected = strncmp("HelloWorld", "HelloWorldazeazeezeazeaezae", 5);

    cr_assert_eq(result, expected);
}

Test(my_strncmp, different_string)
{
    int result = my_strncmp("ABC", "DEF", 3);
    int expected = strncmp("ABC", "DEF", 3);

    cr_assert_eq(result, expected);
}

Test(my_strncmp, same_string_different_size)
{
    int result = my_strncmp("ABC", "AEF", 1);
    int expected = strncmp("ABC", "AEF", 1);

    cr_assert_eq(result, expected);
}

Test(my_strncmp, zero)
{
    int result = my_strncmp("ABC", "AEF", 0);
    int expected = strncmp("ABC", "AEF", 0);

    cr_assert_eq(result, expected);
}
// Test my_strncat

#include <criterion/criterion.h>

#include "my.h"

Test(my_strncat, casual)
{
    char destmy[20] = {0};
    destmy[0] = 'H';
    destmy[1] = 'e';
    
    char dest[20] = {0};
    dest[0] = 'H';
    dest[1] = 'e';

    char *result = my_strncat(destmy, "lloWorld", 20);
    char *expected = strncat(dest, "lloWorld", 20);

    cr_assert_str_eq(result, expected);
}

Test(my_strncat, casual_different_size)
{
    int size_to_cat = 5;

    char destmy[12] = {0};
    destmy[0] = 'H';
    destmy[1] = 'e';
    
    char dest[12] = {0};
    dest[0] = 'H';
    dest[1] = 'e';

    char *result = my_strncat(destmy, "lloWorld", size_to_cat);
    char *expected = strncat(dest, "lloWorld", size_to_cat);

    cr_assert_str_eq(result, expected);
}

Test(my_strncat, casual_different_size_over)
{
    char destmy[12] = {0};
    destmy[0] = 'H';
    destmy[1] = 'e';
    
    char dest[12] = {0};
    dest[0] = 'H';
    dest[1] = 'e';

    char *result = my_strncat(destmy, "", 100);
    char *expected = strncat(dest, "", 100);

    cr_assert_str_eq(result, expected);
}


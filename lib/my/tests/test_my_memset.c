/*
** EPITECH PROJECT, 2023
** lib-C-ursed [WSL : Ubuntu]
** File description:
** test_my_memset
*/

#include <criterion/criterion.h>

void *my_memset(void *ptr, unsigned long long data, unsigned long long size);
char *my_strdup(char const *src);

Test(my_memset, should_return_ptr)
{
    char *ptr = my_strdup("Hello World");
    int data = 'f';
    int size = 2;
    char *expected = "ffllo World";
    char *expected_ptr = ptr;

    char *result = my_memset(ptr, data, size);

    cr_assert_eq(result, expected_ptr);
    cr_assert_str_eq(result, expected);
    free(ptr);
}

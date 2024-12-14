#include <criterion/criterion.h>

#include "my.h"

Test(my_swap, casual)
{
    int a = 1;
    int b = 2;

    my_swap(&a, &b);
    cr_assert_eq(a, 2);
    cr_assert_eq(b, 1);
}

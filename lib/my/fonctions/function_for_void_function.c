/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** function_for_void_function
*/

#include <stdbool.h>

bool function_for_void_function(void(*function)(void *), void *its_a_trap)
{
    function(its_a_trap);
    return (true);
}

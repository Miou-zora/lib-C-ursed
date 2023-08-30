/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** my_memset
*/

void *my_memset(void *ptr, unsigned long long data, unsigned long long size)
{
    return (size--) ? my_memset(ptr, (((char *)ptr)[size] = data), size) : ptr;
}

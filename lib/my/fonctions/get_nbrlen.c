/*
** EPITECH PROJECT, 2021
** B-CPE-101-NAN-1-1-bistromatic-axel.idoux [WSL: Ubuntu]
** File description:
** get_nbrlen
*/

int get_nbrlen(int nb)
{
    int out_len = 0;

    for (; nb != 0; out_len++)
        nb /= 10;
    return (out_len);
}

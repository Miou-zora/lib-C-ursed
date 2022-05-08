/*
** EPITECH PROJECT, 2021
** B-CPE-101-NAN-1-1-bistromatic-axel.idoux [WSL: Ubuntu]
** File description:
** get_nbrlen
*/

unsigned int get_nbrlen(int nb)
{
    return ((nb != 0) ? (1 + get_nbrlen(nb / 10)) : 0);
}

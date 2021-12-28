/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "./includes/framebuffer.h"

int main(int ac, char **av)
{
    int y, v, a, f, e, r;
    if (av[1][0] == '1')
        y = ensemble();
    if (av[1][0] == '2')
        v = ok();
    if (av[1][0] == '3')
        a = pointilles();
    if (av[1][0] == '4')
        f = lignes();
    if (av[1][0] == '-' && av[1][1] == 'h')
        e = usage();
    if (av[1][0] == '-' && av[1][1] == 'd')
        r = faits();
}

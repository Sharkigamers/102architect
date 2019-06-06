/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** print description (flag -h)
*/

#include "my.h"

int print_descr(char **av)
{
    if (av[1][0] != '-' || av[1][1] != 'h')
        return (84);
    printf("USAGE\n   ./102architect x y transfo1 arg11 [arg12] ");
    printf("[transfo2 arg12 [arg22]] ...\n\n");
    printf("DESCRIPTION\n    x      abscissa of the original point\n    y");
    printf("      ordinate of the original point\n\n    transfo arg1 [arg2]\n");
    printf("    -t i j      translation along vector (i, j)\n    -z m n      ");
    printf("scaling by factors m (x-avis) and n (y-axis)\n    -r d        ");
    printf("rotation centered in O by a d degree angle\n    -s d        ");
    printf("reflection over the axis passing through O with an inclination\n");
    printf("                angle of d degrees\n");
    return (0);
}

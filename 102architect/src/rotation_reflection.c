/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** rotation and reflection (flags r and s)
*/

#include "my.h"

void my_rotation(char **av)
{
    double coo_x = atof(av[1]);
    double coo_y = atof(av[2]);
    double degree = atof(av[4]);
    double rad = degree * M_PI / 180;
    double rota_x = cos(rad) * coo_x - sin(rad) * coo_y;
    double rota_y = sin(rad) * coo_x + cos(rad) * coo_y;

    printf("Rotation by a %s degree angle\n", av[4]);
    my_rota(rad);
    my_rota2(rad);
    my_rota3(rad);
    if (cos(rad) < 0.00 && cos(rad) > -0.01)
        printf("0.00    0.00\n0.00    0.00    1.00\n");
    else if (cos(rad) < 0)
        printf("%.2f   0.00\n0.00    0.00    1.00\n", cos(rad));
    else
        printf("%.2f    0.00\n0.00    0.00    1.00\n", cos(rad));
    printf("(%s, %s) => (%.2f, %.2f)\n", av[1], av[2], rota_x, rota_y);
}

void my_reflection(char **av)
{
    double coo_x = atof(av[1]);
    double coo_y = atof(av[2]);
    double degree = atof(av[4]);
    double rad = degree * M_PI / 180;
    double refl_x = cos(2 * rad) * coo_x + sin(2 * rad) * coo_y;
    double refl_y = sin(2 * rad) * coo_x - cos(2 * rad) * coo_y;

    printf("Reflection over an axis with an inclination angle ");
    printf("of %s degrees\n", av[4]);
    my_reflect(rad);
    my_reflect2(rad);
    my_reflect3(rad);
    printf("(%s, %s) => (%.2f, %.2f)\n", av[1], av[2], refl_x, refl_y);
}

int rota_reflect(char **av)
{
    int word = 1;

    for (; word <= 4; word = word + 1) {
        if (word == 3)
            word = word + 1;
        gest_error(av[word]);
    }
    if (av[3][0] == '-' && av[3][1] == 'r')
        my_rotation(av);
    else if (av[3][0] == '-' && av[3][1] == 's')
        my_reflection(av);
    else
        return (84);
    return (0);
}

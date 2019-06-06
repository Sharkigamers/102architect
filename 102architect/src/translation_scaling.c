/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** flags t and z
*/

#include "my.h"

void my_translation(char **av)
{
    double coo_x = atof(av[1]);
    double coo_y = atof(av[2]);
    double trans_x = atof(av[4]);
    double trans_y = atof(av[5]);

    coo_x = coo_x + trans_x;
    coo_y = coo_y + trans_y;
    printf("Translation along vector (%s, %s)\n", av[4], av[5]);
    printf("1.00    0.00    %.2f\n0.00    1.00    %.2f\n", trans_x, trans_y);
    printf("0.00    0.00    1.00\n(%s, %s) => ", av[1], av[2]);
    printf("(%.2f, %.2f)\n", coo_x, coo_y);
}

void my_scaling(char **av)
{
    double coo_x = atof(av[1]);
    double coo_y = atof(av[2]);
    double scal_x = atof(av[4]);
    double scal_y = atof(av[5]);

    coo_x = coo_x * scal_x;
    coo_y = coo_y * scal_y;
    printf("Scaling by factors %s and %s\n", av[4], av[5]);
    if (scal_x < 0)
        printf("%.2f   ", scal_x);
    else
        printf("%.2f    ", scal_x);
    if (scal_y < 0)
        printf("0.00    0.00\n0.00    %.2f   ", scal_y);
    else
        printf("0.00    0.00\n0.00    %.2f    ", scal_y);
    printf("0.00\n0.00    0.00    1.00\n(%s, %s) => ", av[1], av[2]);
    printf("(%.2f, %.2f)\n", coo_x, coo_y);
}

int trans_scal(char **av)
{
    int word = 1;

    for (; word <= 5; word = word + 1) {
        if (word == 3)
            word = word + 1;
        gest_error(av[word]);
    }
    if (av[3][0] == '-' && av[3][1] == 't')
        my_translation(av);
    else if (av[3][0] == '-' && av[3][1] == 'z')
        my_scaling(av);
    else
        return (84);
    return (0);
}

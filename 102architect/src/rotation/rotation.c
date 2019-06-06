/*
** EPITECH PROJECT, 2018
** 102_architect
** File description:
** for rotation
*/

#include "my.h"

void my_rota(double rad)
{
     if (cos(rad) < 0.00 && cos(rad) > -0.01)
        printf("0.00    ");
    else if (cos(rad) < 0)
        printf("%.2f   ", cos(rad));
    else
        printf("%.2f    ", cos(rad));
}

void my_rota2(double rad)
{
    if (-sin(rad) < 0.00 && -sin(rad) > -0.01)
        printf("0.00    0.00\n");
    else if (-sin(rad) < 0)
        printf("%.2f   0.00\n", -sin(rad));
    else
        printf("%.2f    0.00\n", -sin(rad));
}

void my_rota3(double rad)
{
    if (sin(rad) < 0.00 && sin(rad) > -0.01)
        printf("0.00    ");
    else if (sin(rad) < 0)
        printf("%.2f   ", sin(rad));
    else
        printf("%.2f    ", sin(rad));
}

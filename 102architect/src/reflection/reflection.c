/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** reflection
*/

#include "my.h"

void my_reflect(double rad)
{
    if (cos(2 * rad) < 0.00 && cos(2 * rad) > -0.01)
        printf("0.00    ");
    else if (cos(2 * rad) < 0)
        printf("%.2f   ", cos(2 * rad));
    else
        printf("%.2f    ", cos(2 * rad));
}

void my_reflect2(double rad)
{
    if (sin(2 * rad) < 0.00 && sin(2 * rad) > -0.01)
        printf("0.00    0.00\n0.00    ");
    else if (sin(2 * rad) < 0)
        printf("%.2f   0.00\n%.2f   ", sin(2 * rad), sin(2 * rad));
    else
        printf("%.2f    0.00\n%.2f    ", sin(2 * rad), sin(2 * rad));
}

void my_reflect3(double rad)
{
    if (-cos(2 * rad) < 0.00 && -cos(2 * rad) > -0.01)
        printf("0.00    0.00\n0.00    0.00    1.00\n");
    else if (-cos(2 * rad) < 0)
        printf("%.2f   0.00\n0.00    0.00    1.00\n", -cos(2 * rad));
    else
        printf("%.2f    0.00\n0.00    0.00    1.00\n", -cos(2 * rad));
}

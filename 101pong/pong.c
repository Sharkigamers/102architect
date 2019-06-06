/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
**        
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void calc_angle(double a, double rX, double rY)
{
    if (a == 0)
        printf("The ball won't reach the bat.\n");
    a = fabs(90 - a * 180 / M_PI);
    if (a >= 0 && a <= 90 && rX <= 0 && rY >= 0)
        printf("The incidence angle is:\n%.2f degrees\n", a);
    else
        printf("The ball won't reach the bat.\n");
}

void velocity_vector(char **src)
{
    double x1 = atof(src[4]);
    double y1 = atof(src[5]);
    double z1 = atof(src[6]);
    double rX = x1 - atof(src[1]);
    double rY = y1 - atof(src[2]);
    double rZ = z1 - atof(src[3]);
    int n = atoi(src[7]);
    double a = acos(rZ / sqrt(powf(rX, 2) + powf(rY, 2) + powf(rZ, 2)));

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", rX, rY, rZ);
    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)\n", rX * n + x1, rY * n + y1, rZ * n + z1);
    calc_angle(a, rX, rY);
}

int pong(char **src)
{
    for (int i = 1; i <= 7; i = i + 1)
        for (int j = 0; src[i][j] != '\0'; j = j + 1)
            if ((src[i][j] < '0' || src[i][j] > '9')
                && src[i][j] != '-' && src[i][j] != '.')
                return (84);
    velocity_vector(src);
    return (0);
}

void print_descr(void)
{
    printf("USAGE\n      ./101pong x0 y0 z0 x1 y1 z1 n\n\n");
    printf("DESCRIPTION\n       x0   ball abscissa at time t - 1\n");
    printf("       y0   ball ordinate at time t - 1\n");
    printf("       z0   ball altitude at time t - 1\n");
    printf("       x1   ball abscissa at time t\n");
    printf("       y1   ball ordinate at time t\n");
    printf("       z1   ball altitude at time t\n");
    printf("       n    time shift (greater than or equal to zero,integer)\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        print_descr();
    else if (ac == 8)
        return (pong(av));
    else
        return (84);
}

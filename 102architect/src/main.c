/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    int rtrn = 0;

    if (ac == 2)
        rtrn = print_descr(av);
    if (ac == 6)
        rtrn = trans_scal(av);
    if (ac == 5)
        rtrn = rota_reflect(av);
    else if (ac != 2 && ac != 5 && ac != 6)
        return (84);
    return (rtrn);
}

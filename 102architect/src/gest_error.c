/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** error gestion
*/

#include "my.h"

void gest_error(char *src)
{
    int letter = 0;

    for (; src[letter] != '\0'; letter = letter + 1)
        if ((src[letter] < '0' || src[letter] > '9')
            && src[letter] != '-' && src[letter] != '.')
            exit(84);
}

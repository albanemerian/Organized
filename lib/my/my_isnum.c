/*
** EPITECH PROJECT, 2023
** my_isnum
** File description:
** my_isnum
*/
#include <stddef.h>

int my_isnum(char *nb)
{
    for (int i = 0; nb[i] != NULL; i++) {
        if (nb[i] >= 48 && nb[i] <= 57) {
            return (1);
        } else {
            return (0);
        }
    }
}

/*
** EPITECH PROJECT, 2023
** printf_n
** File description:
** printf_n
*/

#include <stdarg.h>
#include "my.h"

static int nb_length(int n)
{
    int len = 1;

    while (n > 9) {
        n = n / 10;
        len ++;
    }
    return (len);
}

int printf_n(const char *format,
    va_list param_infos, int i, int compt)
{
    int *k = (int *) va_arg(param_infos, int *);
    int cpt = 1;

    for (int z = 0; format[z] != '%' && format[z + 1] != 'n'; z++) {
        *k = cpt;
        cpt += 1;
    }
    return (cpt);
}

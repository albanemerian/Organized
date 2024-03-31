/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** sort_check
*/

#include "../libshell/shell.h"
#include "../include/organize.h"

int checked_sorting(void *data, char **args)
{
    if (strcmp_my(args[0], "ID") == 1) {
        if (id_sort(data, args) == 84)
            return 84;
    }
    return 0;
}

int check_sort(void *data, char **args)
{
    if (strcmp_my(args[0], "NAME") == 1) {
        if (name_sort(data, args) == 84)
            return 84;
    }
    if (strcmp_my(args[0], "TYPE") == 1) {
        if (type_sort(data, args) == 84)
            return 84;
    } else if (checked_sorting(data, args) == 84) {
        return 84;
    }
    return 0;
}

int sort_list(char *arg)
{
    if (!(strcmp_my(arg, "ID") == 1 ||
        strcmp_my(arg, "NAME") == 1 ||
        strcmp_my(arg, "TYPE") == 1)) {
            write(2, "Incorrect type input\n", 22);
            return 84;
    }
    return 0;
}

int sort(void *data, char **args)
{
    if (args[0] == NULL) {
        write(2, "Enter correct aguments\n", 24);
        return 84;
    } else {
        if (sort_list(args[0]) == 84) {
            return 84;
        }
        if (check_sort(data, args) == 84) {
            return 84;
        }
    }
    return 0;
}

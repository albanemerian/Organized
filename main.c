/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** main
*/

#include "libshell/shell.h"

void display_str(void *data)
{
    my_printf("%s", (char *)data);
}

int main(int argc, char **argv)
{
    linked_list_t **list = NULL;

    if (argc == 1) {
        if (workshop_shell(&list) == 84) {
            return 84;
        }
        free(list);
    } else {
        write(2, "Too many arguments try again\n", 29);
        return 84;
    }
}

/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** disp
*/

#include "../libshell/shell.h"

int error_ling(char **args)
{
    int counter;

    for (int i = 0; args[i] != NULL; i++) {
        counter++;
    }
    if (counter > 4) {
        write(2, "To many arguments\n", 19);
        return 84;
    }
    return 0;
}

int disp(void *data, char **args)
{
    linked_list_t *current = *(linked_list_t **)data;

    if (error_ling(args) == 84) {
        return 84;
    }
    while (current != NULL) {
        my_printf("%s n°%d - \"%s\"\n", current->type,
            current->id, current->name);
        current = current->next;
    }
    return 0;
}

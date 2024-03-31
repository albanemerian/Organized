/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** dell
*/

#include "libshell/shell.h"

int error_type(linked_list_t **list, linked_list_t *current)
{
    if ((*list) == NULL) {
        write(2, "List is empty\n", 15);
        return (84);
    }
    if (current == NULL) {
        write(2, "End of the list\n", 17);
    }
    return 0;
}

int max_id(void *data)
{
    int nb_node = 0;
    linked_list_t *current = *(linked_list_t **)data;

    for (int i = 0; current != NULL; i++) {
        nb_node++;
        current = current->next;
    }
    return nb_node;
}

int del_display(int i, linked_list_t *current, char **arg,
    linked_list_t **list)
{
    linked_list_t *previuous = NULL;

    while (current != NULL) {
        if (my_getnbr(arg[i]) == current->id) {
            previuous->next = current->next;
            my_printf("%s n°%d - \"%s\" deleted.\n", current->type,
            current->id, current->name);
            return 0;
        } else {
        previuous = current;
        current = current->next;
        }
    }
    write(2, "Incorrect id\n", 14);
    return 84;
}

int display_del(int i, linked_list_t *current, char **arg,
    linked_list_t **list)
{
    linked_list_t *temp = (*list);

    if ((*list)->id == my_getnbr(arg[i])) {
        temp = *list;
        *list = (*list)->next;
        my_printf("%s n°%d - \"%s\" deleted.\n", temp->type,
        temp->id, temp->name);
        free(temp);
    } else if (del_display(i, current, arg, list) == 84) {
        return 84;
    }
    return 0;
}

int del(void *data, char **args)
{
    linked_list_t **list = (linked_list_t **)data;
    linked_list_t *current = *list;

    if (error_type(list, current) == 84) {
        return 84;
    }
    for (int i = 0; args[i] != NULL; i++) {
        if ((my_isnum(args[i]) == 0)) {
            write(2, "Incorrect input\n", 16);
            return 84;
        }
        if (display_del(i, current, args, list) == 84) {
            return 84;
        }
    }
    return (0);
}

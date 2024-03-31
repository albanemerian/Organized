/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** sort_name
*/

#include "libshell/shell.h"
#include "include/organize.h"
#include <string.h>

void bubble_name_reverse(linked_list_t *current, int nb_node, int i)
{
    for (int j = 0; j < (nb_node - i -1); j ++) {
        if (cmp_my(current->name, current->next->name) != 1) {
            node_swicht(current, current->next);
        }
        current = current->next;
    }
}

void bubble_name(linked_list_t *current, int nb_node, int i)
{
    for (int j = 0; j < (nb_node - i -1); j ++) {
        if (cmp_my(current->name, current->next->name) == 1) {
            node_swicht(current, current->next);
        }
        current = current->next;
    }
}

static int name_error(linked_list_t *current, char **args, int nb_node, int i)
{
    if (cmp_my(args[1], "-r") == 0) {
        bubble_name_reverse(current, nb_node, i);
    }
    return 0;
}

static int sort_eman(void *data, char **args, int i, int nb_node)
{
    linked_list_t *current = *(linked_list_t **)data;

    if (args[1] == NULL) {
        bubble_name(current, nb_node, i);
        current = *(linked_list_t **)data;
    } else if (name_error(current, args, nb_node, i) == 84) {
        return 84;
    }
    return 0;
}

int name_sort(void *data, char **args)
{
    int nb_node = node_counter(data, args);

    for (int i = 0; i < nb_node; i++) {
        if (sort_eman(data, args, i, nb_node) == 84)
            return 84;
    }
    return 0;
}

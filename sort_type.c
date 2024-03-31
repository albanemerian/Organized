/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** sort_type
*/

#include "libshell/shell.h"
#include "include/organize.h"

void bubble_type_reverse(linked_list_t *current, int nb_node, int i)
{
    for (int j = 0; j < (nb_node - i -1); j ++) {
        if (cmp_my(current->type, current->next->type) != 1) {
            node_swicht(current, current->next);
        }
        current = current->next;
    }
}

void bubble_type(linked_list_t *current, int nb_node, int i)
{
    for (int j = 0; j < (nb_node - i -1); j ++) {
        if (cmp_my(current->type, current->next->type) == 1) {
            node_swicht(current, current->next);
        }
        current = current->next;
    }
}

static int type_error(linked_list_t *current, char **args, int nb_node, int i)
{
    if (cmp_my(args[1], "-r") == 0) {
        bubble_type_reverse(current, nb_node, i);
    }
    return 0;
}

static int sort_epyt(void *data, char **args, int i, int nb_node)
{
    linked_list_t *current = *(linked_list_t **)data;

    if (args[1] == NULL) {
        bubble_type(current, nb_node, i);
        current = *(linked_list_t **)data;
    } else if (type_error(current, args, nb_node, i) == 84) {
        return 84;
    }
    return 0;
}

int type_sort(void *data, char **args)
{
    int nb_node = node_counter(data, args);

    for (int i = 0; i < nb_node; i++) {
        if (sort_epyt(data, args, i, nb_node) == 84) {
            return 84;
        }
    }
    return 0;
}

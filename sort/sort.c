/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** sort
*/

#include "../libshell/shell.h"
#include "../include/organize.h"

void bubble_sort(linked_list_t *current, int nb_node, int i)
{
    for (int j = 0; j < (nb_node - i -1); j ++) {
        if (current->id > current->next->id) {
            node_swicht(current, current->next);
        }
        current = current->next;
    }
}

static int error_andling(linked_list_t *current, char **args, int nb_node,
    int i)
{
    if (cmp_my(args[1], "-r") == 0) {
        reverse_sort(current, nb_node, i);
    }
    return 0;
}

static int sort_di(void *data, char **args, int i, int nb_node)
{
    linked_list_t *current = *(linked_list_t **)data;

    if (args[1] == NULL) {
        bubble_sort(current, nb_node, i);
        current = *(linked_list_t **)data;
    } else if (error_andling(current, args, nb_node, i) == 84) {
        return 84;
    }
    return 0;
}

int id_sort(void *data, char **args)
{
    int nb_node = node_counter(data, args);

    for (int i = 0; i < nb_node; i++) {
        if (sort_di(data, args, i, nb_node) == 84) {
            return 84;
        }
    }
    return 0;
}

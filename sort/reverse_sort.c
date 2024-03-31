/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** reverse_sort
*/

#include "../libshell/shell.h"
#include "../include/organize.h"

int node_counter(void *data, char **args)
{
    int nb_node = 0;
    linked_list_t *current = *(linked_list_t **)data;

    for (int i = 0; current != NULL; i++) {
        nb_node++;
        current = current->next;
    }
    return nb_node;
}

void node_swicht(linked_list_t *node, linked_list_t *edon)
{
    int temp_id = node->id;
    char *temp_name = node->name;
    char *temp_type = node->type;

    node->id = edon->id;
    node->name = edon->name;
    node->type = edon->type;
    edon->id = temp_id;
    edon->name = temp_name;
    edon->type = temp_type;
}

void reverse_sort(linked_list_t *current, int nb_node, int i)
{
    for (int j = 0; j < (nb_node - i -1); j ++) {
        if (current->id < current->next->id) {
            node_swicht(current, current->next);
        }
        current = current->next;
    }
}

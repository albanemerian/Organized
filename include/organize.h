/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** organize
*/

#include "my.h"

#ifndef ORGANIZE_H_
    #define ORGANIZE_H_

int error_gestion(char **args);
int node_counter(void *data, char **args);
void display_str(void *data);
void node_swicht(linked_list_t *node, linked_list_t *edon);
int id_sort(void *data, char **args);
int name_sort(void *data, char **args);
int type_sort(void *data, char **args);
int add_list(char *arg);
int list_add(int i, linked_list_t *new_node, char **args,
    linked_list_t **list);
int error_type(linked_list_t **list, linked_list_t *current);
int error_handling(char **args);
void reverse_sort(linked_list_t *current, int nb_node, int i);

#endif /* !ORGANIZE_H_ */

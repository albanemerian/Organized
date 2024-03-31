/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** add
*/
#include "../libshell/shell.h"

int error_gestion(char **args)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    int counter;

    for (int i = 0; args[i] != NULL; i++) {
        counter++;
    }
    if (args[0] == NULL) {
        write(2, "No value to add\n", 16);
        return 84;
    }
    if (new_node == NULL) {
        write(2, "Malloc failed\n", 15);
        return 84;
    }
    return 0;
}

int add_list(char *arg)
{
    if (!(strcmp_my(arg, "ACTUATOR") == 1 ||
        strcmp_my(arg, "WIRE") == 1 ||
        strcmp_my(arg, "DEVICE") == 1 ||
        strcmp_my(arg, "PROCESSOR") == 1 ||
        strcmp_my(arg, "SENSOR") == 1)) {
            write(2, "Incorrect type input\n", 22);
            return 84;
    }
    return 0;
}

int list_add(int i, linked_list_t *new_node, char **args,
    linked_list_t **list)
{
    static int id = 0;

    new_node->id = id;
    new_node->type = my_strdup(args[i]);
    if (args[i] == NULL)
        return 84;
    new_node->name = my_strdup(args[i + 1]);
    if (args[i + 1] == NULL)
        return 84;
    new_node->next = *list;
    *list = new_node;
    my_printf("%s n°%d - \"%s\" added.\n", (*list)->type,
    (*list)->id, (*list)->name);
    id++;
    return 0;
}

int add_error(linked_list_t **list, int i, char **args)
{
    linked_list_t *new_node;

    if (add_list(args[i]) == 84)
        return 84;
    new_node = malloc(sizeof(linked_list_t));
    if (new_node == NULL)
        return 84;
    if (*list == NULL)
        new_node->id = 0;
    if (list_add(i, new_node, args, list) == 84)
        return 84;
    return 0;
}

int add(void *data, char **args)
{
    linked_list_t **list = (linked_list_t **)data;

    if (error_gestion(args) == 84)
        return 84;
    for (int i = 0; args[i] != NULL; i += 2) {
        if (args[i + 1] == NULL) {
            write(2, "Not enough arguments\n", 22);
            return 84;
        }
        if (add_error(list, i, args) == 84)
            return 84;
    }
    return (0);
}

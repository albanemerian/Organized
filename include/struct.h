/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-organized-albane.merian
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct linked_list_s {
    void *data;
    int id;
    char *name;
    char *type;
    struct linked_list_s *next;
    struct linked_list_s *prev;
} linked_list_t;

#endif /* !STRUCT_H_ */

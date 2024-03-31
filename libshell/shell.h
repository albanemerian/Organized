/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/
#include "../include/my.h"
#include "../include/struct.h"
#include "../include/organize.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef SHELL_H
    #define SHELL_H

// To be implemented
int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);

// Already implemented
int workshop_shell(void *data);

#endif /* SHELL_H */

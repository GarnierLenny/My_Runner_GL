/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** free_struct
*/

#include "my.h"

void free_struct(global_t *g)
{
    free_game(g->game);
    free(g);
}
/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** malloc_global
*/

#include "my.h"

global_t *malloc_global(global_t *g)
{
    g = malloc(sizeof(global_t));
    g->game = malloc_game(g->game);
    return g;
}
/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** destroy_window
*/

#include "my.h"

void destroy_all(global_t *g)
{
    destroy_music(g->game);
    destroy_background(g->game->background);
    destroy_player(g->game->player);
    destroy_window(g->window);
    free_struct(g);
}
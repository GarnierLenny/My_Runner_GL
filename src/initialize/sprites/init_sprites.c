/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_sprites
*/

#include "my.h"

void init_sprites(global_t *g)
{
    init_background(g->game->background);
    init_player(g->game->player);
    init_arrow(g->game->arrow);
    init_game_over(g->game->game_over);
}
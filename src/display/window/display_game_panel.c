/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** display_game_panel
*/

#include "my.h"

void display_game_panel(global_t *g)
{
    if (g->game->game_state == game_on)
        display_game_on(g->window, g->game);
    if (g->game->game_state == game_over)
        display_game_over(g);
}
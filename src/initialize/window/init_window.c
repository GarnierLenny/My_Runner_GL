/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** init_window
*/

#include "my.h"

void init_window(global_t *g)
{
    sfVideoMode mode = {1920, 1080, 32};

    g->window = sfRenderWindow_create
    (mode, "my_runner", sfFullscreen | sfClose, NULL);
    sfRenderWindow_setMouseCursorVisible(g->window, sfTrue);
    sfRenderWindow_setFramerateLimit(g->window, 60);
    g->game->game_state = game_on;
}
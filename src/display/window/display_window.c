/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** display_window
*/

#include "my.h"

void display_window(global_t *g)
{
    while (sfRenderWindow_isOpen(g->window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(g->window, &event)) {
            if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
                sfRenderWindow_close(g->window);
        }
        move_sprites(g);
        display_game_panel(g);
        sfRenderWindow_display(g->window);
        clock_r();
    }
    update_highscore(g->game);
}
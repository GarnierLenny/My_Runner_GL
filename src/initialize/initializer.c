/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** initializer
*/

#include "my.h"

void initializer(global_t *g)
{
    init_window(g);
    init_sprites(g);
    init_audio(g->game);
    sfMusic_setLoop(g->game->music, sfTrue);
    sfMusic_play(g->game->music);
    g->game->highscore = init_highscore(g->game);
}
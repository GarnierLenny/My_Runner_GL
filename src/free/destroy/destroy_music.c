/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** destroy_music
*/

#include "my.h"

int destroy_music(game_t *game)
{
    sfMusic_stop(game->music);
    sfMusic_destroy(game->music);
    return 0;
}
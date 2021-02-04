/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_audio
*/

#include "my.h"

int init_audio(game_t *game)
{
    game->music = sfMusic_createFromFile("src/audio/Music.ogg");
    sfMusic_setVolume(game->music, 20);
    return 0;
}
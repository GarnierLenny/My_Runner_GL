/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** free_game
*/

#include "my.h"

void free_game(game_t *game)
{
    free(game->game_over);
    free_player(game->player);
    free_background(game->background);
    free(game->background);
    free(game);
}
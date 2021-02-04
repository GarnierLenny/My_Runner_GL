/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** malloc_game
*/

#include "my.h"

arrow_t *malloc_arrow(arrow_t *arrow)
{
    arrow = malloc(sizeof(arrow_t));
    arrow->spr = malloc(sizeof(spr_t));
    return arrow;
}

game_t *malloc_game_over(game_t *game)
{
    game->game_over = malloc(sizeof(game_over_t));
    game->game_over->game_over = malloc(sizeof(spr_t));
    game->game_over->retry_button = malloc(sizeof(spr_t));
    game->game_over->scoreboard_button = malloc(sizeof(spr_t));
    game->game_over->exit_button = malloc(sizeof(spr_t));
    return game;
}

game_t *malloc_game(game_t *game)
{
    game = malloc(sizeof(game_t));
    game = malloc_game_over(game);
    game->background = malloc_background(game->background);
    game->player = malloc_player(game->player);
    game->arrow = malloc_arrow(game->arrow);
    return game;
}
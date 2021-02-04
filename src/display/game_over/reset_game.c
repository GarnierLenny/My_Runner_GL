/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** reset_game
*/

#include "my.h"

void reset_game(game_t *game)
{
    update_highscore(game);
    game->player->score_int = 0;
    game->game_state = game_on;
    sfText_setColor(game->highscore, sfYellow);
    sfText_setString(game->player->score, "0");
    game->player->health_points = 3;
    game->player->health->rect.top = 0;
    sfSprite_setTextureRect(game->player->health->spr,
        game->player->health->rect);
}
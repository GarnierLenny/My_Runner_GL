/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** display_player
*/

#include "my.h"

void display_scores(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawText(window, game->highscore, NULL);
    sfRenderWindow_drawText(window, game->player->score, NULL);
    sfRenderWindow_drawSprite(window, game->player->health->spr, NULL);
}

void display_player(sfRenderWindow *window, player_t *player)
{
    sfRenderWindow_drawSprite(window, player->spr->spr, NULL);
    sfRenderWindow_drawSprite(window, player->health->spr, NULL);
    sfRenderWindow_drawText(window, player->score, NULL);
}
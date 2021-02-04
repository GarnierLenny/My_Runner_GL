/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** check_hit
*/

#include "my.h"

void check_hit(game_t *game)
{
    float x = game->player->spr->pos.x;
    float y = game->player->spr->pos.y;
    sfFloatRect rect = sfSprite_getGlobalBounds(game->arrow->spr->spr);

    if (sfFloatRect_contains(&rect, x + 100, y + 105) == sfTrue) {
        if (game->player->health_points == 1) {
            game->player->health->rect.top += 31;
            if (game->player->health->rect.top >= 93)
                game->game_state = game_over;
            sfSprite_setTextureRect(game->player->health->spr,
            game->player->health->rect);
            game->player->health_points = 0;
            sfSprite_setPosition(game->arrow->spr->spr, v2f(-500, 750));
        }
    } else {
        game->player->health_points = 1;
    }
}
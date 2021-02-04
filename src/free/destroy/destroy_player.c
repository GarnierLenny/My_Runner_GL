/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** destroy_player
*/

#include "my.h"

void destroy_player(player_t *player)
{
    sfSprite_destroy(player->spr->spr);
    sfTexture_destroy(player->spr->text);
    sfText_destroy(player->score);
}
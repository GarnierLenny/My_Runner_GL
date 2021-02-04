/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** free_player
*/

#include "my.h"

void free_player(player_t *player)
{
    free(player->spr);
    free(player->health);
    free(player);
}
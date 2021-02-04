/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** malloc_player
*/

#include "my.h"

player_t *malloc_player(player_t *player)
{
    player = malloc(sizeof(player_t));
    player->spr = malloc(sizeof(spr_t));
    player->health = malloc(sizeof(spr_t));
    return player;
}
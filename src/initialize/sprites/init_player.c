/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_player
*/

#include "my.h"

void init_health(player_t *player)
{
    create_sprite(player->health, LIFE_POINT, v2f(20, 40));
    player->health->rect = rect(0, 0, 120, 30);
    sfSprite_setTextureRect(player->health->spr, player->health->rect);
    sfSprite_setScale(player->health->spr, v2f(3, 3));
}

void init_player(player_t *player)
{
    player->spr->pos = v2f(100, 650);
    create_sprite(player->spr, PLAYER_MVT, player->spr->pos);
    player->spr->rect = rect(0, 0, 165, 165);
    sfSprite_setTextureRect(player->spr->spr, player->spr->rect);
    sfSprite_setScale(player->spr->spr, v2f(1.75, 1.75));
    sfTexture_setSmooth(player->spr->text, sfTrue);
    sfTexture_setRepeated(player->spr->text, sfTrue);
    player->run_count = 0;
    player->height_m = 0;
    player->jump_state = ground;
    init_health(player);
    player->score = create_text(player->score, sfWhite, "0", v2f(1600, 170));
    player->score_del = 0;
    player->score_int = 0;
}
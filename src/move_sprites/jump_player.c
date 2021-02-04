/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** jump_player
*/

#include "my.h"

void set_jump_on(player_t *player)
{
    player->jump_state = upward;
    player->height_m = player->spr->pos.y - 240;
    player->spr->rect.top += 165;
    sfSprite_setTextureRect(player->spr->spr, player->spr->rect);
}

void jump_down(player_t *player)
{
    if (player->jump_state == downward) {
        player->spr->pos.y += (player->spr->pos.y - player->height_m) / 5;
        if ((650 - player->spr->pos.y) <= 10) {
            player->spr->pos.y = 650;
            player->jump_state = ground;
            player->height_m = 0;
            player->spr->rect.top = 0;
            player->spr->rect.left = 0;
            sfSprite_setTextureRect(player->spr->spr, player->spr->rect);
            return;
        }
        player->spr->rect.left += 165;
        if (player->spr->rect.left >= 1920)
            player->spr->rect.left = 990;
        sfSprite_setTextureRect(player->spr->spr, player->spr->rect);
    }
}

void jump_up(player_t *player)
{
    if (player->jump_state == upward) {
        player->spr->pos.y -= (player->spr->pos.y - player->height_m) / 5;
        if ((player->spr->pos.y - player->height_m) <= 10) {
            player->jump_state = downward;
            player->spr->rect.left = 990;
            return;
            }
        player->spr->rect.left += 165;
        if (player->spr->rect.left >= 800)
            player->spr->rect.left = 0;
        sfSprite_setTextureRect(player->spr->spr, player->spr->rect);
    }
}

void check_jump(player_t *player)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && player->jump_state == ground)
        set_jump_on(player);
    if (player->jump_state == ground)
        return;
    jump_up(player);
    jump_down(player);
    sfSprite_setPosition(player->spr->spr, player->spr->pos);
}
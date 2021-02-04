/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** move_player
*/

#include "my.h"

void move_player(player_t *player)
{
    if (player->run_count == 1) {
        player->spr->rect.left += 165;
        sfSprite_setTextureRect(player->spr->spr, player->spr->rect);
        player->run_count = 0;
        check_jump(player);
    } else {
        player->run_count += 1;
    }
    if (player->score_del == 6) {
        player->score_int += 1;
        player->score_del = 0;
        sfText_setString(player->score, int_to_str(player->score_int));
    } else
        player->score_del += 1;
}
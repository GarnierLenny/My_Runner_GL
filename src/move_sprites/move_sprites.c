/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** move_sprites
*/

#include "my.h"

void move_sprites_offset(spr_t *spr, int offset)
{
    spr->rect.left += offset;
}

void move_sprites(global_t *g)
{
    move_sprites_offset(g->game->background->fifth_layer, 1);
    move_sprites_offset(g->game->background->fourth_layer, 2);
    move_sprites_offset(g->game->background->third_layer, 3);
    move_sprites_offset(g->game->background->second_layer, 4);
    move_sprites_offset(g->game->background->ground, 5);
    set_textures_rect_background(g->game->background);
    if (g->game->game_state != game_on)
        return;
    move_player(g->game->player);
    move_arrow(g->game->arrow);
    set_textures_rect_background(g->game->background);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** destroy_game_over
*/

#include "my.h"

void destroy_game_over_sprites(game_over_t *game_over)
{
    sfSprite_destroy(game_over->game_over->spr);
    sfSprite_destroy(game_over->retry_button->spr);
}

void destroy_game_over_textures(game_over_t *game_over)
{
    sfTexture_destroy(game_over->game_over->text);
    sfTexture_destroy(game_over->retry_button->text);
}

void desrtoy_game_over(game_over_t *game_over)
{
    destroy_game_over_sprites(game_over);
    destroy_game_over_textures(game_over);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_game_over
*/

#include "my.h"

void game_over_apply_rect(game_over_t *game_over)
{
    sfSprite_setTextureRect(game_over->game_over->spr,
        game_over->game_over->rect);
    sfSprite_setTextureRect(game_over->retry_button->spr,
        game_over->retry_button->rect);
    sfSprite_setTextureRect(game_over->exit_button->spr,
        game_over->exit_button->rect);
}

void game_over_set_rect(game_over_t *game_over)
{
    game_over->game_over->rect = rect(0, 0, 921, 528);
    game_over->retry_button->rect = rect(0, 0, 15, 15);
    game_over->exit_button->rect = rect(0, 0, 15, 15);
    game_over_apply_rect(game_over);
}

void init_game_over_scales(game_over_t *game_over)
{
    sfSprite_scale(game_over->game_over->spr, v2f(1.15, 1.15));
    sfSprite_setScale(game_over->retry_button->spr, v2f(11.5, 11.5));
    sfSprite_setScale(game_over->exit_button->spr, v2f(11.5, 11.5));
}

void init_game_over(game_over_t *game_over)
{
    create_sprite(game_over->game_over, GAME_OVER, v2f(400, 200));
    create_sprite(game_over->retry_button, RETRY_BUTTON, v2f(570, 550));
    create_sprite(game_over->exit_button, EXIT_BUTTON, v2f(1100, 550));
    game_over_set_rect(game_over);
    init_game_over_scales(game_over);
}
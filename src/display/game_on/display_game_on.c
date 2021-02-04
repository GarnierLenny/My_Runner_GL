/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** display_game_on
*/

#include "my.h"

void display_arrow(sfRenderWindow *window, arrow_t *arrow)
{
    sfRenderWindow_drawSprite(window, arrow->spr->spr, NULL);
}

void update_highscore_game(game_t *game)
{
    if (game->player->score_int > game->highscore_int) {
        sfText_setColor(game->highscore, sfGreen);
        sfText_setString(game->highscore, int_to_str(game->player->score_int));
    }
}

void display_game_on(sfRenderWindow *window, game_t *game)
{
    display_background(window, game->background);
    display_player(window, game->player);
    display_arrow(window, game->arrow);
    update_highscore_game(game);
    sfRenderWindow_drawText(window, game->highscore, NULL);
    check_hit(game);
}
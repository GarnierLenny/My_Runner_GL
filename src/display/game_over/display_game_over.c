/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** display_game_over
*/

#include "my.h"

void check_button_pressed(sfRenderWindow *window, game_t *game)
{
    sfFloatRect rect = sfSprite_getGlobalBounds
        (game->game_over->retry_button->spr);
    float mouse_x = sfMouse_getPositionRenderWindow(window).x;
    float mouse_y = sfMouse_getPositionRenderWindow(window).y;

    if (sfFloatRect_contains(&rect, mouse_x, mouse_y) &&
        sfMouse_isButtonPressed(sfMouseLeft))
            reset_game(game);
    rect = sfSprite_getGlobalBounds(game->game_over->exit_button->spr);
    if (sfFloatRect_contains(&rect, mouse_x, mouse_y) &&
        sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(window);
}

void display_game_over(global_t *g)
{
    display_background(g->window, g->game->background);
    display_scores(g->window, g->game);
    sfRenderWindow_drawSprite(g->window,
        g->game->game_over->game_over->spr, NULL);
    sfRenderWindow_drawSprite(g->window,
        g->game->game_over->retry_button->spr, NULL);
    sfRenderWindow_drawSprite(g->window,
        g->game->game_over->exit_button->spr, NULL);
    check_button_pressed(g->window, g->game);
}
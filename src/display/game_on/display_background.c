/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** display_background
*/

#include "my.h"

void display_background(sfRenderWindow *window, background_t *bg)
{
    sfRenderWindow_drawSprite(window, bg->sixth_layer->spr, NULL);
    sfRenderWindow_drawSprite(window, bg->fifth_layer->spr, NULL);
    sfRenderWindow_drawSprite(window, bg->fourth_layer->spr, NULL);
    sfRenderWindow_drawSprite(window, bg->third_layer->spr, NULL);
    sfRenderWindow_drawSprite(window, bg->second_layer->spr, NULL);
    sfRenderWindow_drawSprite(window, bg->ground->spr, NULL);
}
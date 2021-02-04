/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** destroy_background
*/

#include "my.h"

void destroy_background_spr(background_t *bg)
{
    sfSprite_destroy(bg->sixth_layer->spr);
    sfSprite_destroy(bg->fifth_layer->spr);
    sfSprite_destroy(bg->fourth_layer->spr);
    sfSprite_destroy(bg->third_layer->spr);
    sfSprite_destroy(bg->second_layer->spr);
    sfSprite_destroy(bg->ground->spr);
}

void destroy_background_text(background_t *bg)
{
    sfTexture_destroy(bg->sixth_layer->text);
    sfTexture_destroy(bg->fifth_layer->text);
    sfTexture_destroy(bg->fourth_layer->text);
    sfTexture_destroy(bg->third_layer->text);
    sfTexture_destroy(bg->second_layer->text);
    sfTexture_destroy(bg->ground->text);
}

void destroy_background(background_t *bg)
{
    destroy_background_spr(bg);
    destroy_background_text(bg);
}
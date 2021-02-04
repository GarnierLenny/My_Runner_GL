/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_background
*/

#include "my.h"

void set_texture_repeated(background_t *bg)
{
    sfTexture_setRepeated(bg->fifth_layer->text, sfTrue);
    sfTexture_setRepeated(bg->fourth_layer->text, sfTrue);
    sfTexture_setRepeated(bg->third_layer->text, sfTrue);
    sfTexture_setRepeated(bg->second_layer->text, sfTrue);
    sfTexture_setRepeated(bg->ground->text, sfTrue);
}

void init_background_rect(background_t *bg)
{
    bg->fifth_layer->rect = rect(0, 0, 1920, 1080);
    bg->fourth_layer->rect = rect(0, 0, 1920, 1080);
    bg->third_layer->rect = rect(0, 0, 1920, 1080);
    bg->second_layer->rect = rect(0, 0, 1920, 1080);
    bg->ground->rect = rect(0, 0, 1920, 1080);
}

void set_textures_rect_background(background_t *bg)
{
    sfSprite_setTextureRect(bg->fifth_layer->spr, bg->fifth_layer->rect);
    sfSprite_setTextureRect(bg->fourth_layer->spr, bg->fourth_layer->rect);
    sfSprite_setTextureRect(bg->third_layer->spr, bg->third_layer->rect);
    sfSprite_setTextureRect(bg->second_layer->spr, bg->third_layer->rect);
    sfSprite_setTextureRect(bg->ground->spr, bg->ground->rect);
}

void set_background_rect(background_t *bg)
{
    init_background_rect(bg);
    set_textures_rect_background(bg);
    set_texture_repeated(bg);
}

void init_background(background_t *bg)
{
    create_sprite(bg->sixth_layer, SIXTH_LAYER, v2f(0, 0));
    create_sprite(bg->fifth_layer, FIFTH_LAYER, v2f(0, 0));
    create_sprite(bg->fourth_layer, FOURTH_LAYER, v2f(0, 0));
    create_sprite(bg->third_layer, THIRD_LAYER, v2f(0, 0));
    create_sprite(bg->second_layer, SECOND_LAYER, v2f(0, 0));
    create_sprite(bg->ground, GROUND_LAYER, v2f(0, 0));
    set_background_rect(bg);
}
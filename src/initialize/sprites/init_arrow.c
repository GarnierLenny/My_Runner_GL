/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_arrow
*/

#include "my.h"

void init_arrow(arrow_t *arrow)
{
    arrow->spr->pos = v2f(1985, 750);
    arrow->spr->rect = rect(17, 4, 141, 17);
    arrow->velocity = 14;
    create_sprite(arrow->spr, ARROW, arrow->spr->pos);
    sfSprite_setTextureRect(arrow->spr->spr, arrow->spr->rect);
    sfSprite_setScale(arrow->spr->spr, v2f(1.75, 1.75));
    sfTexture_setSmooth(arrow->spr->text, sfTrue);
    sfTexture_setRepeated(arrow->spr->text, sfTrue);
}
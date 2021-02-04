/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** move_arrow
*/

#include "my.h"

void move_arrow(arrow_t *arrow)
{
    float x = sfSprite_getPosition(arrow->spr->spr).x;
    float y = sfSprite_getPosition(arrow->spr->spr).y;

    x -= arrow->velocity;
    if (x < -220) {
        srand(time(NULL));
        sfSprite_setPosition(arrow->spr->spr, v2f(1985, y));
        arrow->velocity = (rand() % 17) + 14;
    } else
        sfSprite_setPosition(arrow->spr->spr, v2f(x, y));
}
/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** malloc_background
*/

#include "my.h"

background_t *malloc_background(background_t *bg)
{
    bg = malloc(sizeof(background_t));
    bg->sixth_layer = malloc(sizeof(spr_t));
    bg->fifth_layer = malloc(sizeof(spr_t));
    bg->fourth_layer = malloc(sizeof(spr_t));
    bg->third_layer = malloc(sizeof(spr_t));
    bg->second_layer = malloc(sizeof(spr_t));
    bg->ground = malloc(sizeof(spr_t));
    return bg;
}
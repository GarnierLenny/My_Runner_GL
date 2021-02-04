/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** free_background
*/

#include "my.h"

void free_background(background_t *bg)
{
    free(bg->sixth_layer);
    free(bg->fifth_layer);
    free(bg->fourth_layer);
    free(bg->third_layer);
    free(bg->second_layer);
    free(bg->ground);
}
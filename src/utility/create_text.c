/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** create_text
*/

#include "my.h"

sfText *create_text(sfText *text, sfColor color, char *str, sfVector2f pos)
{
    sfFont *font = NULL;

    font = sfFont_createFromFile(FONT);
    text = sfText_create();
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setColor(text, color);
    sfText_setCharacterSize(text, 90);
    sfText_setOutlineColor(text, sfBlack);
    sfText_setOutlineThickness(text, 2);
    sfText_setPosition(text, pos);
    return text;
}
/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** init_highscore
*/

#include "my.h"

sfText *init_highscore(game_t *game)
{
    int fd = open("src//score_src/highscore", O_RDWR);
    char *buffer = malloc(sizeof(char) * 2);
    int count = 0;
    int fd2;

    for (int x = 1; x != 0; count++)
        x = read(fd, buffer, 1);
    buffer = malloc(sizeof(char) * count);
    fd2 = open("src/score_src/highscore", O_RDWR);
    read(fd2, buffer, count);
    buffer[count - 1] = '\0';
    game->highscore = create_text(game->highscore, sfYellow, buffer,
        v2f(1600, 60));
    game->highscore_int = my_getnbr(buffer);
    return game->highscore;
}
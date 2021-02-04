/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** update_highscore
*/

#include "my.h"

int find_dig_nb(int nb)
{
    int i = 1;
    int count = 1;

    for (; i <= nb; i *= 10, count++);
    return count;
}

int update_highscore(game_t *game)
{
    int fd = 0;

    if (game->player->score_int > game->highscore_int) {
        game->highscore_int = game->player->score_int;
        fd = open("src/score_src/highscore", O_RDWR);
        write(fd, int_to_str(game->player->score_int),
            find_dig_nb(game->player->score_int) - 1);
        close(fd);
    }
    return 0;
}
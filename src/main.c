/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    global_t *g = NULL;

    if (usage(ac, av) == 1)
        return 0;
    g = malloc_global(g);
    initializer(g);
    display_window(g);
    destroy_all(g);
    return 0;
}
/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-lenny.garnier
** File description:
** usage
*/

#include "my.h"

int comp_strings(char *s1, char *s2)
{
    int i = 0;

    for (; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}

int usage(int ac, char **av)
{
    if (ac == 2 && comp_strings(av[1], "-h") == 1) {
        my_printf("USAGE\n");
        my_printf("     ./my_runner\n");
        my_printf("DESCRIPTION\n");
        my_printf("     Welcome to my_runner !\n");
        my_printf("     When the game's started, arrows will");
        my_printf("be thrown at you\n");
        my_printf("     To dodge them, press SPACE to jump\n");
        return 1;
    }
    return 0;
}
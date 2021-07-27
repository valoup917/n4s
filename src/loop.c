/*
** EPITECH PROJECT, 2018
** loop.c
** File description:
** .
*/

#include "n_for_stek.h"

void game(void)
{
    while (1) {
        speed_limitation();
        directions();
    }
    return;
}

void end(char *str)
{
    unsigned int i = 0;
    unsigned int j = 0;
    char *tmp = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (!tmp)
        perror("Malloc");
    for (; str[i] != ':'; i++);
    i++;
    for (; str[i] != ':'; i++);
    i++;
    for (; str[i] != ':'; i++);
    i++;
    for (;str[i] != '\0' && str[i] != ':'; i++, j++)
        tmp[j] = str[i];
    tmp[j] = '\0';
    if (my_strcmp("Track Cleared", tmp) == 0) {
        do_the_task("stop_simulation\n");
        exit(0);
    }
}

/*
** EPITECH PROJECT, 2018
** directions.c
** File description:
** .
*/

#include "n_for_stek.h"

void directions(void)
{
    char *line = NULL;
    char **lidar = NULL;
    float a;
    size_t len = 0;

    dprintf(1, "get_info_lidar\n");
    if (getline(&line, &len, stdin) == -1)
        exit(0);
    lidar = my_str_to_word_array(line);
    a = my_atof(lidar[15]);
    convert_direction(lidar, a);
    free(line);
    free_all(lidar);
    return;
}

void convert_direction(char **lidar, float a)
{
    char *line = NULL;
    size_t len = 0;

    my_putstr("wheels_dir:");
    if ((my_atof(lidar[1]) - my_atof(lidar[31])) < 0)
        my_putchar('-');
    if (a >= 2999)
        my_putstr("0.0051\n");
    else if (a >= 1501)
        my_putstr("0.051\n");
    else if (a >= 1001)
        my_putstr("0.11\n");
    else if (a >= 551)
        my_putstr("0.21\n");
    else if (a >= 301)
        my_putstr("0.381\n");
    else
        my_putstr("0.51\n");
    if (getline(&line, &len, stdin) == -1)
        exit(0);
    end(line);
}

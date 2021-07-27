/*
** EPITECH PROJECT, 2018
** speed.c
** File description:
** .
*/

#include "n_for_stek.h"

void speed_limitation(void)
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
    convert_speed(a);
    free(line);
    free_all(lidar);
    return;
}

void convert_speed(float val)
{
    char *line = NULL;
    size_t len = 0;

    my_putstr("car_forward:");
    if (val >= 2001)
        my_put_float(0.601);
    else if (val >= 1501)
        my_put_float(0.501);
    else if (val >= 1001)
        my_put_float(0.351);
    else if (val >= 601)
        my_put_float(0.281);
    else if (val >= 401)
        my_put_float(0.201);
    else
        my_put_float(0.101);
    my_putchar('\n');
    if (getline(&line, &len, stdin) == -1)
        exit(0);
    end(line);
}

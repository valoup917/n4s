/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** n4s
*/

#ifndef n4s
#define n4s

#include <stdlib.h>
#include <stdio.h>
#include "../lib/lib.h"

// main.c
void do_the_task(const char *command);
void free_all(char **map);

// directions.c
void directions(void);
void convert_direction(char **lidar, float a);

// speed.c
void speed_limitation(void);
void convert_speed(float val);

// loop.c
void game(void);
void end(char *str);

// bloqued.c
void blocked(void);

#endif /* !n4s */
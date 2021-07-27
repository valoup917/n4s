/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** .
*/

#include "n_for_stek.h"

int main(void)
{
    do_the_task("start_simulation\n");
    game();
    do_the_task("stop_simulation\n");
    return (0);
}

void do_the_task(const char *command)
{
    char *line = NULL;
    size_t len = 0;

    dprintf(1, "%s", command);
    if (getline(&line, &len, stdin) == -1)
        exit(84);
}

void free_all(char **map)
{
    for (unsigned int i = 0; map[i]; i += 1) {
        free(map[i]);
    }
    free(map);
}

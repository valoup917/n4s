/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** .
*/

#include <unistd.h>
#include "n_for_stek.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** .
*/

#include "n_for_stek.h"

char *my_strdup(const char* str)
{
    int len = 0;
    char *dup;

    len = my_strlen(str) + 1;
    dup = malloc(len);

    if (dup == NULL)
        return (NULL);

    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}
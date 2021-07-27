/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** .
*/

#include "n_for_stek.h"

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static int nbr_letters(char *str)
{
    int a = 0;

    for (;str[a] != ':';a++);
    return a;
}

static int nb_words(char *str)
{
    int x = 0;

    for (unsigned int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == ':')
            x++;
    }
    return x;
}

static int is_good(char c)
{
    return ((c <= '9' && c >= '0') || c == '.');
}

char **my_str_to_word_array(char *str)
{
    int nbr_words = nb_words(str) - 2;
    int k = 0;
    int y = 0;
    int i = 0;
    char **new = malloc(sizeof(char *) * (nbr_words + 100));

    if (!new)
        perror("malloc");
    for (;i < nbr_words;i++) {
        while (is_good(str[k]) != 1)
            k++;
        if (is_good(str[k]) == 1)
            new[i] = malloc(sizeof(char)*(nbr_letters(str) + 100));
        if (!new[i])
            perror("malloc");
        while (is_good(str[k]) == 1) {
            new[i][y] = str[k];
            k++;
            y++;
        }
        new[i][y] = '\0';
        y = 0;
    }
    new[i] = NULL;
    return new;
}

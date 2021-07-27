/*
** EPITECH PROJECT, 2018
** putfloat
** File description:
** .
*/

#include "n_for_stek.h"

int my_put_float(double nbr)
{
    char *base = "0123456789";
    long dec;
    long ent;
    double dec2;
    int i = 0;

    ent = nbr;
    dec = nbr * (float)1000000;
    dec -= ent * 1000000;
    dec2 = (double)dec;
    i += my_putnbr_base_long(ent, base);
    i++;
    my_putchar('.');
    i += my_putnbr_base_long((long)dec2, base);
    return (i);
}

int my_putnbr_base_long(long nbr, char *base)
{
    int i = 0;
    int size;
    long nb;

    if (nbr < 0) {
        nbr = - nbr;
        i += 1;
        my_putchar('-');
    }
    size = my_strlen(base);
    if (nbr > 0) {
        nb = nbr;
        nbr /= size;
        i += my_putnbr_base_long(nbr, base);
        i += 1;
        my_putchar(base[nb % size]);
    }
    return (i);
}

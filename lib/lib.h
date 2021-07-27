/*
** EPITECH PROJECT, 2021
** lib
** File description:
** .
*/

#ifndef LIB
#define LIB

char **my_str_to_word_array(char *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char *str);
int my_put_float(double nbr);
int my_putnbr_base_long(long nbr, char *base);
char *my_strdup(const char *src);
char *my_strcpy(char *dest, const char *src);
int my_strcmp(char *str_o, char *str_c);
int my_strlen(const char *str);
char *my_strcat(char *dest, const char *src);
double my_atof(char *str);
int is_number(char c);


#endif /* !LIB */
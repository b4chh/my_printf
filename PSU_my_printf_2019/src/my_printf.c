/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** printf
*/

#include "../my.h"
#include <stdarg.h>

int research(char *tab, char word)
{
    int i = 0;

    for (i = 0; tab[i] != '\0'; i++) {
        if (tab[i] == word)
            return (i);
        if (i >= my_strlen(tab) - 1)
            return (84);
    }
    return (0);
}

int my_printf(char *src, ...)
{
    va_list name;
    void (*tabfunct[10]) (va_list) = {my_str, my_char, my_nbr, my_octale,
    my_binar, my_hexa, my_puthexa,
    my_u, my_nbr, my_s};
    char tabflag[11] = "scdobxXuiS";
    int i = 0;
    int temp = 0;

    va_start(name, src);
    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] == '%' && src[i + 1] == '%')
            return (0);
        if (src[i] == '%' && research(tabflag , src[i + 1]) != 84) {
            if ((temp = research(tabflag, src[i + 1])) == 84)
                return (84);
            (*tabfunct[temp]) (name);
            i = i + 1;
        } else
            my_putchar(src[i]);
    }
    va_end(name);
}

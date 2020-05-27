/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** okok
*/

#include <stdarg.h>
#include <unistd.h>
#include "../my.h"

void my_s(va_list name)
{
    my_puts(va_arg(name, char *));
}

static int my_octale_len(unsigned int nb)
{
    int i = 0;

    for (; nb > 0; nb /= 8, i++);
    return (i);
}

static void print_0(unsigned char nb)
{
    for (int i = my_octale_len(nb); i < 3; i++)
        my_putchar('0');
}

void my_puts(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putstr("\\");
            print_0(str[i]);
            my_put_nbr_octale(str[i]);
        } else {
            my_putchar(str[i]);

        }
        i++;
    }
}

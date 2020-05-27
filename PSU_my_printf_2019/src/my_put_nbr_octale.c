/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** okok
*/

#include <unistd.h>
#include <stdarg.h>
#include "../my.h"

void my_octale(va_list name)
{
    unsigned int  octale = va_arg(name, unsigned int);

    my_put_nbr_octale(octale);
}

void my_put_nbr_octale(unsigned int nb)
{
    if (nb > 0) {
        my_put_nbr_octale(nb / 8);
        my_putchar((nb % 8) + '0');
    }
}

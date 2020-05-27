/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** okok
*/

#include <unistd.h>
#include <stdarg.h>
#include "../my.h"

void my_binar(va_list name)
{
    my_put_nbr_binar(va_arg(name, unsigned int));
}

int my_put_nbr_binar(unsigned int nb)
{
    if (nb > 0) {
        my_put_nbr_binar(nb / 2);
        my_putchar((nb % 2) + '0');
    }
}

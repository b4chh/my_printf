/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** okok
*/
#include <stdarg.h>
#include <unistd.h>
#include "../my.h"

void my_u(va_list name)
{
    my_put_nbr_u(va_arg(name, unsigned int));
}

int my_put_nbr_u(unsigned int nb)
{
    if (nb > 0) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
}

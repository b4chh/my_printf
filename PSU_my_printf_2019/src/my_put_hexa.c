/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** okok
*/

#include <unistd.h>
#include <stdarg.h>
#include "../my.h"

void my_puthexa(va_list name)
{
    my_put_hexa(va_arg(name, unsigned int));
}

int my_put_hexa(unsigned int nb)
{
    if (nb > 0 && nb < 9) {
        my_put_hexa(nb / 16);
        my_putchar((nb % 16) + '0');
    }
    if (nb > 9) {
        my_put_hexa(nb / 16);
        my_putchar((nb % 16) + 55);
    }
}

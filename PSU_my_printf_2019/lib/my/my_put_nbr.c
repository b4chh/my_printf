/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** okok
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < -2147483647 || nb > 2147483647)
        return (0);
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > 0) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
}

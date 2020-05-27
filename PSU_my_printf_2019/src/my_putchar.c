/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** okok
*/

#include "../my.h"
#include <unistd.h>
#include <stdarg.h>

void my_char(va_list name)
{
    my_putchar((char)va_arg(name, int));
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

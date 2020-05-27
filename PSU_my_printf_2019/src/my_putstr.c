/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** okok
*/

#include <stdarg.h>
#include <unistd.h>
#include "../my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; ++i);
    return (i);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

void my_str(va_list name)
{
    my_putstr(va_arg(name, char *));
}

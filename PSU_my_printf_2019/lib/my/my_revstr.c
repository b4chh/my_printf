/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** okok
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_revstr(char *str)
{
    char z;
    for (int i = (my_strlen(str) / 2 - 1); i >= 0; i--) {

        z = str[i];
        str[i] = str[my_strlen(str) - i -1];
        str[my_strlen(str) - i - 1] = z;
    }
    return (str);
}

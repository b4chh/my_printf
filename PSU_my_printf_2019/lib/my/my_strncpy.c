/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** okok
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int a = 0; a < n; a++) {
        dest[a] = src[a];
    }
    return (dest);
}

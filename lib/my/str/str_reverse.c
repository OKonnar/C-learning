/*
** EPITECH PROJECT, 2021
** Claymore
** File description:
** str_reverse.c
*/

#include "../libmy.h"

char *str_reverse(char *str)
{
    int x = str_length(str) - 1;
    char tmp;

    for (int i = 0; i < x; i++) {
        tmp = str[i];
        str[i] = str[x];
        str[x] = tmp;
        x--;
    }
    return (str);
}

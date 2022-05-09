/*
** EPITECH PROJECT, 2021
** Claymore
** File description:
** str_duplicate.c
*/

#include "../../include/include.h"

#include "stdlib.h"

char *str_strdup(char *src)
{
    char *str = malloc(sizeof(char) * (str_length(src) + 1));
    int i = 0;

    if (str == NULL)
        return NULL;
    for (; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = '\0';
    return str;
}

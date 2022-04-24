/*
** EPITECH PROJECT, 2021
** Claymore
** File description:
** str_duplicate.c
*/

#include "../libmy.h"

#include <stdio.h>

char *cl_strdup(char *src, mall_t **mal)
{
    char *str = cl_malloc(str_length(src) + 1, mal);
    int i = 0;

    if (str == NULL)
        return NULL;
    for (; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}

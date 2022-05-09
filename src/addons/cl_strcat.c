/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** cl_strcat.c
*/

#include "../../include/include.h"

#include <stdio.h>

char *cl_strcat(char *src, char *cat, mall_t **mal)
{
    char *new = cl_malloc((str_length(src) + str_length(cat) + 1), mal);
    int pnt = 0;

    new[str_length(src) + str_length(cat)] = '\0';
    if (new == NULL)
        return NULL;
    for (int i = 0; i < str_length(src); i++, pnt++)
        new[pnt] = src[i];
    for (int i = 0; i < str_length(cat); i++, pnt++)
        new[pnt] = cat[i];
    return new;
}

char *cl_strncat(char *src, char *cat, int size, mall_t **mal)
{
    char *new;
    int real = 0;
    int pnt = 0;

    if (size <= str_length(cat))
        real = size;
    else
        real = str_length(cat);
    if ((new = cl_malloc((str_length(src) + real + 1), mal)) == NULL)
        return NULL;
    new[str_length(src) + real] = '\0';
    for (int i = 0; i < str_length(src); i++, pnt++)
        new[pnt] = src[i];
    for (int i = 0; i < real; i++, pnt++)
        new[pnt] = cat[i];
    return new;
}

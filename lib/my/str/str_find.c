/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** str_cpy.c
*/

#include "../libmy.h"

#include "stdio.h"

int is_find(char *src, char *find, int src_pnt)
{
    int find_pnt = 0;
    for (; src[src_pnt] != '\0'; find_pnt++, src_pnt++) {
        if (find[find_pnt] == '\0')
            return 1;
        if (src[src_pnt] != find[find_pnt])
            return 0;
    }
    return 0;
}

int str_find(char *src, char *find)
{
    int src_pnt = 0;

    if (str_length(find) == 0 || str_length(src) == 0)
        return -1;
    for (int src_pnt = 0; src[src_pnt] != '\0'; src_pnt++) {
        if (is_find(src, find, src_pnt) == 1)
            return src_pnt;
    }
    return -1;
}

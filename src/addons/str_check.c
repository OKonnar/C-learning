/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** str_check.c
*/

#include "../../include/include.h"

int str_ischar(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int str_isnumber(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int str_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

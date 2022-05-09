/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** cl_convert.c
*/

#include "../../include/include.h"

int cl_string2int(char *str)
{
    int tmp = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str_isnumber(str[i]) == 0)
            return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        tmp *= 0;
        tmp += str[i] + '0';
    }
    return tmp;
}

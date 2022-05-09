/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** print_str.c
*/

#include "../../include/include.h"

#include <unistd.h>

void print_str(const char *str)
{
    write(1, str, str_length(str));
}

/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** print_arr.c
*/

#include "../libmy.h"

void print_arr(char **arr)
{
    for (int i = 0; arr[i] != 0; i++)
        print_str(arr[i]);
}
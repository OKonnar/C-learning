/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** main.c
*/

#include "../include/include.h"

int main(void)
{
    char *str = str_strdup("hey, how are you? 42WORds forty-two; fifty+one");
    str = str_lowercase(str);
    printf("%s", str_capitalize(str));
    return 0;
}
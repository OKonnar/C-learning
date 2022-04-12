/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** main.c
*/

#include "../include/include.h"

int main(void)
{
    mall_t *mal = NULL;

    for (int i = 0; i != 10; i++) {
        char *str = cl_malloc(sizeof(char) * (10 + 1), &mal);
        printf("> %p <\n", str);
    }
    cl_free_malloc(mal);
    return 0;
}
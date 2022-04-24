/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** main.c
*/

#include "../include/include.h"

// ============================== taille =======================================

int main(void)
{
    liste_t *list = NULL;
    if (cl_getfile("Makefile", &list) == NULL)
        return 84;

    cl_printfile(list);
    return 0;
}

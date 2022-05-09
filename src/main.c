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
    cl_t *cl = cl_init();

    cl_getfile("Makefile", &cl);
    cl_printfile(cl->list);
    cl_free(cl);
    return 0;
}

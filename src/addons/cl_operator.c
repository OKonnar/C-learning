/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** cl_operator.c
*/

#include "../../include/include.h"

#include <stdio.h>
#include <stdlib.h>

cl_t *cl_init()
{
    cl_t *cl = malloc(sizeof(mall_t));
    cl->list = NULL;
    cl->mall = NULL;
}

void cl_free(cl_t *cl)
{
    for (mall_t *tmp; cl->mall->next != NULL;) {
        tmp = cl->mall;
        free(tmp->data);
        cl->mall = cl->mall->next;
        free(tmp);
    }
    free(cl->mall);
    free(cl);
}

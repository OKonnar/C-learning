/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** cl_malloc.c
*/

#include "../libmy.h"

#include <stdlib.h>
#include <stdio.h>

void cl_free(mall_t *mall)
{
    for (mall_t *tmp; mall != NULL;) {
        tmp = mall;
        free(tmp->data);
        mall = mall->next;
        free(tmp);
    }
    free(mall);
}

void *cl_malloc(int size, mall_t **head)
{
    mall_t *wagon = malloc(sizeof(mall_t));

    wagon->data = malloc(size);
    wagon->next = (*head);
    (*head) = wagon;
    return wagon->data;
}

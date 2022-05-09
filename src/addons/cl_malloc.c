/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** cl_malloc.c
*/

#include "../../include/include.h"

#include <stdlib.h>
#include <stdio.h>

void *cl_malloc(int size, mall_t **head)
{
    mall_t *wagon = malloc(sizeof(mall_t));

    if (wagon == NULL || (wagon->data = malloc(size)) == NULL)
        return NULL;
    wagon->next = (*head);
    (*head) = wagon;
    return wagon->data;
}

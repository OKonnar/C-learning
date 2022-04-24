/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** struct.h
*/

#include "libmy.h"

typedef struct liste_s {
    char *data;
    struct liste_s* next;
} liste_t;

typedef struct mall_s {
    void *data;
    struct mall_s* next;
} mall_t;
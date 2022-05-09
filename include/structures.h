/*
** EPITECH PROJECT, 2021
** B-CPE-200-STG-2-1-dante-axel.lievre
** File description:
** struct.h
*/

#ifndef STRUCTURES_H
    #define STRUCTURES_H

typedef struct liste_s {
    char *data;
    struct liste_s* next;
} liste_t;

typedef struct mall_s {
    void *data;
    struct mall_s* next;
} mall_t;

typedef struct cl_s {
    mall_t *mall;
    liste_t *list;
} cl_t;

#endif

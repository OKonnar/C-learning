/*
** EPITECH PROJECT, 2021
** Claymore
** File description:
** Claymore.h
*/

#ifndef CLAYMORE_H
    #define CLAYMORE_H

#include "struct.h"

void print_str(const char *str);
void print_int(long long int i);
void print_arr(char **arr);

int str_length(const char *str);
char *str_reverse(char *str);
char *str_duplicate(char const *src);
int str_cmp(char *a, char *b);
int str_ncmp(const char *a, const char *b, int s);

void cl_file(char *path, liste_t **list);
void print_cl_file(liste_t *list);
void free_cl_file(liste_t *list);

void *cl_malloc(int size, mall_t **head);
void cl_free_malloc(mall_t *mall);

#endif

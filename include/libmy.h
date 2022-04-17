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
int str_find(char *src, char *find);
char *str_strdup(char *src);
char *str_uppercase(char *str);
char *str_lowercase(char *str);
char *str_capitalize(char *str);
int str_ischar(char c);
int str_isalpha(char c);
int str_isnumber(char c);
int str_cmp(char *a, char *b);
int str_ncmp(char *a, char *b, int s);
void str_swap(char **s1, char **s2);

void cl_getfile(char *path, liste_t **list);
void cl_printfile(liste_t *list);
void cl_freefile(liste_t *list);

void *cl_malloc(int size, mall_t **head);
void cl_free(mall_t *mall);

char *cl_strdup(char *src, mall_t **mal);
char *cl_strcat(char *src, char *cat, mall_t **mal);
char *cl_strncat(char *src, char *cat, int size, mall_t **mal);
char **cl_stwa(char *str, mall_t **mal);
void cl_sort_array(char ***arr);

#endif

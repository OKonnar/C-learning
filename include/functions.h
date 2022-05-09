/*
** EPITECH PROJECT, 2021
** B-CPE-200-STG-2-1-dante-axel.lievre
** File description:
** proto.h
*/

#ifndef FUNCTIONS_H
    #define FUNCTIONS_H

#include "structures.h"

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

void *cl_getfile(char *path, cl_t **cl);
void cl_printfile(liste_t *list);
void cl_freefile(liste_t *list);
void *cl_malloc(int size, mall_t **head);
cl_t *cl_init();
void cl_free(cl_t *cl);
char *cl_strdup(char *src, mall_t **mal);
char *cl_strcat(char *src, char *cat, mall_t **mal);
char *cl_strncat(char *src, char *cat, int size, mall_t **mal);
char **cl_sort_array(char **arr);

#endif

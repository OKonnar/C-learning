/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** cl_sort.c
*/

#include "../libmy.h"

#include <stdio.h>

void str_swap(char **s1, char **s2)
{
    char *tmp = *s1;
    (*s1) = (*s2);
    (*s2) = tmp;
}

int is_sorted(char **arr)
{
    for (int i = 0; arr[i + 1] != 0; i++) {
        if (str_cmp(arr[i], arr[i + 1]) >= 0)
            return 0;
    }
    return 1;
}

void cl_sort_array(char ***arr)
{
    while (is_sorted(*arr) == 0) {
        printf("okay\n");
        for (int i = 0; arr[i + 1] != 0; i++) {
            if (str_cmp(*arr[i], *arr[i + 1]) <= 0) {
                printf("i swap\n");
                str_swap(arr[i], arr[i + 1]);
            }
        }
    }
    printf("is sorted\n");
}
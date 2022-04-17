/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** main.c
*/

#include "../include/include.h"

int main(void)
{
    mall_t *mal = NULL;
    // char *str = cl_strdup("Ala CEio JEO KmA NoE petER", &mal);
    char *str = cl_strdup("hey, how are you? 42 WORds forty-two; fifty+one", &mal);
    char **arr = cl_stwa(str, &mal);
    // str_swap(&arr[0], &arr[1]);
    print_arr(arr);
    cl_sort_array(&arr);
    print_arr(arr);
    cl_free(mal);
    return 0;
}
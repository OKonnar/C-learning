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
    char *str = cl_strdup("hey, how are you? 42 WORds forty-two; fifty+one", &mal);
    char **arr = cl_stwa(str, &mal);

    arr = cl_sort_array(arr);
    print_arr(arr);
    cl_free(mal);
    return 0;
}
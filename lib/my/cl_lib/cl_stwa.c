/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** cl_stwa.c
*/

#include "../libmy.h"

void malloc_str(char ***arr, char *str, mall_t **mal)
{
    int stc = 1;
    int pnt = 0;
    int size = 0;
    int i = 0;

    for (; str[pnt] != '\0'; pnt++) {
        if (str_isalpha(str[pnt]) == 1) {
            size++;
            stc = 1;
        } else if (stc == 1) {
            (*arr)[i] = cl_malloc(sizeof(char) * (size + 1), mal);
            (*arr)[i][size] = '\0';
            i++;
            stc = 0;
            size = 0;
        }
    }
    (*arr)[i] = cl_malloc(sizeof(char) * (size + 1), mal);
    (*arr)[i][size] = '\0';
}

char **malloc_arr(char *str, mall_t **mal)
{
    char **arr;
    int stc = 0;
    int size = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str_isalpha(str[i]) == 0 && stc == 1) {
            size ++;
            stc = 0;
        }
        if (str_isalpha(str[i]) == 1)
            stc = 1;
    }
    arr = cl_malloc(sizeof(char *) * (size + 1), mal);
    arr[size] = 0;
    malloc_str(&arr, str, mal);
    return arr;
}

char **cl_stwa(char *str, mall_t **mal)
{
    char **arr = malloc_arr(str, mal);
    int pnt = 0;
    int size = 0;
    int stc = 0;
    int i = 0;

    for (; str[pnt] != '\0'; pnt++) {
        if (str_isalpha(str[pnt]) == 1) {
            arr[i][size] = str[pnt];
            size++;
            stc = 1;
        } else if (stc == 1) {
            i++;
            stc = 0;
            size = 0;
        }
    }
    return arr;
}

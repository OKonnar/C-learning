/*
** EPITECH PROJECT, 2021
** C-learning
** File description:
** str_mod.c
*/

#include "../libmy.h"

int is_char(char c) {
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

char *str_uppercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    return str;
}

char *str_lowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    return str;
}

char *str_capitalize(char *str)
{
    int stc = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && stc == 1) {
            str[i] -= 32;
            stc = 0;
        }
        if (is_char(str[i]) == 0)
            stc = 1;
    }
    return str;
}

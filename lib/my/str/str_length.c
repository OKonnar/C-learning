/*
** EPITECH PROJECT, 2021
** Claymore
** File description:
** str_length.c
*/

int str_length(const char *str)
{
    int i = 0;
    for (; *str != '\0'; *str++, i++);
    return (i);
}

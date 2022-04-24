/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** main.c
*/

#include "../include/include.h"

int main(void)
{
    int lettre = 0;
    write(1, "abcdefghijklmnopqrstuvxyz", 26);

    for (; lettre != 122; lettre++)
        write(1, &lettre, 1);
    return 0;
}
/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** print_int.c
*/

#include <unistd.h>

void print_int(long long int i)
{
    if (i < 0) {
        i *= -1;
        write(1, "-", 1);
    }
    char x = i % 10 + '0';

    if (i / 10 != 0)
        print_int(i / 10);
    write(1 , &x, 1);
}

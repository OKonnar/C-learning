/*
** EPITECH PROJECT, 2021
** Ines
** File description:
** verif.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int check_space(char *buff)
{
    int swtch = 1;
    int i = 0;

    for (; buff[i] != '\0'; i++) {
        if (swtch == 1 && buff[i] == ' ')
            return 1;
        if (buff[i] == ' ')
            swtch = 1;
        if (buff[i] != ' ')
            swtch = 0;
    }
    if (buff[i] == ' ')
        return 1;
    return 0;
}

int check_cap_front(char *buff)
{
    if (buff[0] >= 'a' && buff[0] <= 'b')
        return 1;
    for (int i = 0; buff[i] != '\0'; i++)
        if (buff[i] == ' ' && buff[i + 1] >= 'a' && buff[i + 1] <= 'z')
            return 1;
    return 0;
}

int check_cap_in(char *buff)
{
    int swtch = 0;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (swtch == 1 && buff[i] >= 'A' && buff[i] <= 'Z')
            return 1;
        if (buff[i] >= 'A' && buff[i] <= 'Z')
            swtch = 1;
        if (buff[i] == ' ')
            swtch = 0;
    }
    return 0;
}

int main(int ac, char **av)
{
    char buff[256];
    int swtch = 0;

    for (; read(0, buff, 257) != 0;);
    if (check_space(buff) == 1)
        return 1;
    if (check_cap_front(buff) == 1)
        return 2;
    if (check_cap_in(buff) == 1)
        return 3;
    if (strlen(buff) == 0)
        return 4;
    return 0;
}
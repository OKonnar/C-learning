/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** str_cmp.c
*/

int str_cmp(char *a, char *b)
{
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        
        if (a[i] != b[i])
            return a[i] - b[i];
    }
    return 0;
}

int str_ncmp(const char *a, const char *b, int s)
{
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if (i > s - 1)
            break;
        if (a[i] != b[i])
            return a[i] - b[i];
    }
    return 0;
}

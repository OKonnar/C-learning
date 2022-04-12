/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** gfile.c
*/

#include "../libmy.h"

#include <stdio.h>
#include <stdlib.h>

void cl_print_file(liste_t *list)
{
    liste_t *tmp = list;

    for (; tmp != NULL; tmp = tmp->next)
        print_str(tmp->data);
}

void cl_free_file(liste_t *list)
{
    for (liste_t *tmp; list != NULL;) {
        tmp = list;
        free(tmp->data);
        list = list->next;
        free(tmp);
    }
    free(list);
}

static void rev_list(liste_t **begin)
{
    liste_t *backup = NULL;
    liste_t *temp;

    while ((*begin) != NULL) {
        temp = (*begin)->next;
        (*begin)->next  = backup;
        backup = (*begin);
        (*begin) = temp;
    }
    (*begin) = backup;
}

static void add_buffnode(liste_t **head, char *buf)
{
    liste_t *wagon = malloc(sizeof(liste_t));

    wagon->data = str_duplicate(buf);
    wagon->next = (*head);
    (*head) = wagon;
}

void cl_file(char *path, liste_t **list)
{
    FILE *stream;
    size_t nread;
    size_t bufsize = 64;
    char *buf;

    stream = fopen(path, "r");
    buf = malloc(sizeof(char) * bufsize);
    while (nread = getline(&buf, &bufsize, stdin) != -1)
        add_buffnode(list, buf);
    fclose(stream);
    free(buf);
    rev_list(list);
}
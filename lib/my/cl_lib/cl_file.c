/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** gfile.c
*/

#include "../libmy.h"

#include <stdio.h>
#include <stdlib.h>

void cl_printfile(liste_t *list)
{
    liste_t *tmp = list;

    for (; tmp != NULL; tmp = tmp->next)
        print_str(tmp->data);
}

void cl_freefile(liste_t *list)
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
        (*begin)->next = backup;
        backup = (*begin);
        (*begin) = temp;
    }
    (*begin) = backup;
}

static void *add_buffnode(liste_t **head, char *buf)
{
    liste_t *wagon = malloc(sizeof(liste_t));

    if (wagon == NULL)
        return NULL;
    wagon->data = str_strdup(buf);
    wagon->next = (*head);
    (*head) = wagon;
}

void *cl_getfile(char *path, liste_t **list)
{
    FILE *stream;
    size_t nread;
    size_t bufsize = 64;
    char *buf;

    if ((stream = fopen(path, "r")) == NULL)
        return NULL;
    if ((buf = malloc(sizeof(char) * bufsize)) == NULL)
        return NULL;
    while (nread = getline(&buf, &bufsize, stream) != -1) {
        if (add_buffnode(list, buf) == NULL) {
            fclose(stream);
            free(buf);
            return NULL;
        }
    }
    fclose(stream);
    free(buf);
    rev_list(list);
}

/*
** EPITECH PROJECT, 2021
** claymore
** File description:
** gfile.c
*/

#include "../../include/include.h"

#include <stdio.h>
#include <stdlib.h>

void cl_printfile(liste_t *list)
{
    liste_t *tmp = list;

    for (; tmp != NULL; tmp = tmp->next)
        print_str(tmp->data);
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

static void *add_buffnode(cl_t **cl, char *buf)
{
    liste_t *wagon = cl_malloc(sizeof(liste_t), &(*cl)->mall);

    if (wagon == NULL)
        return NULL;
    wagon->data = cl_strdup(buf, &(*cl)->mall);
    wagon->next = (*cl)->list;
    (*cl)->list = wagon;
}

void *cl_getfile(char *path, cl_t **cl)
{
    FILE *stream;
    size_t nread;
    size_t bufsize = 64;
    char *buf;

    if ((stream = fopen(path, "r")) == NULL)
        return NULL;
    if ((buf = cl_malloc(sizeof(char) * bufsize, &(*cl)->mall)) == NULL)
        return NULL;
    while (nread = getline(&buf, &bufsize, stream) != -1) {
        if (add_buffnode(cl, buf) == NULL) {
            fclose(stream);
            free(buf);
            return NULL;
        }
    }
    fclose(stream);
    free(buf);
    rev_list(&(*cl)->list);
}

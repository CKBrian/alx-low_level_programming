#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates arguments to the program
 * @ac: Argument to function-main count
 * @av: Pointer to array of arguments
 * Return: Pointer to a new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
    int i, j;
    char **p;

    if (ac == 0 || av == NULL)
        return NULL;

    p = malloc(ac * sizeof(char *));
    if (p == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            ;

        p[i] = malloc((j + 2) * sizeof(char));
        if (p[i] == NULL)
            return NULL;
    }

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            p[i][j] = av[i][j];
        p[i][j++] = '\n';
        p[i][j] = '\0';
    }

    return *p;
}


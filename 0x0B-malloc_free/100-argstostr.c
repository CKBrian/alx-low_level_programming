#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - Concatanates arguments to the program
 * @ac: Argument to function-main count
 * @av: pointer to array of arguments
 * Return: pointer to a new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return ((void *)0);

	for (i = 0; i < ac ; i++)
	{
		if (av[i] == NULL)
			return ((void *)0);
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	p = malloc((len + 1 + ac) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return ((void *)0);
	}
	for (i = 0; i < ac; i++)
	{
		len = 0;
		for (j = len; av[i][j] != '\0'; j++)
		{
			p[x++] = av[i][j];
			len++;
		}
		p[x++] = '\n';
	}
	p[x++] = '\0';

	return (p);
}

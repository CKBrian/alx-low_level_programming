#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatanates arguments to the program
 * @ac: Argument to function-main count
 * @av: pointer to array of arguments
 * Return: pointer to a new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 1;
	char *p, *str;

	if (ac == 0 || av == NULL)
		return ((void *)0);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	p = malloc(sizeof(char *) + ((len + 1) * sizeof(char)));
	if (p == NULL)
	{
		free(p);
		return ((void *)0);
	}
	str = p;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p++ = av[i][j];
		}
		*p++ = '\n';
	}
	*p++ = '\0';

	return (str);
}

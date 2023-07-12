#include <stdlib.h>
#include "main.h"
/**
 * strtow - Splits an array of strings into words
 * @str: String array to be split
 * Return: Pointer to astring otherwise NULL
 */
char **strtow(char *str)
{
	int i, j, l, size, word, len = 0, k = 0;
	char **s;

	if (str == NULL || *str == '\0' || str[0] == ' ')
		return ((void *)0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			word = 0;
		}
		else if (!word)
		{
			word = 1;
			k++;
		}

	}

	s = malloc((k + 1) * sizeof(char *));
	if (s == NULL)
		return ((void *)0);

	for (i = 0; i < k; i++)
	{
		while (str[len] == ' ' || str[len] == '\n')
			len++;
		for (j = len; !(str[j] == ' ' || str[j] == '\0'); j++)
		{}
		size = (j - len) + 1;
		s[i] = malloc(size * sizeof(char));
		if (s[i] == NULL)
			return ((void *)0);
		for (l = 0; l < size - 1; l++)
		{
			s[i][l] = str[len];
			len++;
		}
		s[i][l] = '\0';

	}
	/* s[k] = '\0';*/
	return (s);
}

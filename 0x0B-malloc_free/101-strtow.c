#include <stdlib.h>
#include "main.h"
/**
 * arrSize - Find  the size of array of word arrays
 * @str: String array to be word-split
 * Return: k otherwise 0
 */
int arrSize(char *str)
{
	int i, word = 0, k = 0;

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
	return (k);

}
/**
 * strtow - Splits an array of strings into words
 * @str: String array to be split
 * Return: Pointer to astring otherwise NULL
 */
char **strtow(char *str)
{
	int i, j, l, size, len = 0, k = 0;
	char **s;

	if (str == NULL || str[0] == '\0')
		return ((void *)0);

	k = arrSize(str);
	if (k == 0)
		return ((void *)0);

	s = malloc((k + 1) * sizeof(char *));
	if (s == NULL)
		return ((void *)0);

	for (i = 0; i < k; i++)
	{
		while (str[len] == ' ' || str[len] == '\n' || str[len] == '\t')
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
	len = j;

	}
	s[k] = ((char *)NULL);
	return (s);
}

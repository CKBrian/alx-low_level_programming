#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocate memory containing copy
 * @str: Pointer to a string
 * Return: Pointer to string otherwise NULL
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return ((void *)0);
	}

	s = malloc(sizeof(str));
	if (s == NULL)
	{
		return ((void *)0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}

#include <stdlib.h>
#include "main.h"
/**
 * memory_alloc - Allocates memory for the concatenated string
 * @s1: First string
 * @s2: Second string
 * @n: Number of chars in s2 to concatenate
 * Return: Pointer to allocated memory else NULL
 */
char *memory_alloc(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;
	char *str;

	if (s1 == NULL)
	{
		i = 0;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
	{}
	for (k = 0; s2 != NULL && s2[k] != '\0'; k++)
	{}

	if (n < k)
	{
		str = malloc((i + n + 1) * sizeof(*str));
		if (str == NULL)
			return ((void *)0);
	}
	else
	{
		n = k;
		str = malloc(sizeof(*str) * (i + n + 1));
		if (str == NULL)
			return ((void *)0);

	}
	return (str);

}
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of chars in s2 to concatenate
 * Return: Pointer to allocated memory else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *str2;

	str2 = memory_alloc(s1, s2, n);
	if (str2 == NULL)
		return ((void *)0);
	if (s1 != NULL && *s1 != '\0')
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str2[i] = s1[i];
		}
	}
	if (s2 != NULL && *s2 != '\0')
	{
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		str2[i] = s2[j];
		i++;
	}
	}
	str2[i] = '\0';
	return (str2);
}

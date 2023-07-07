#include "main.h"
/**
 * _strpbrk - Searches a string for any sets of byted
 * @s: adress of string to be searched
 * @accept: Number of string bytes
 * Return: pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
		}
	}
	return ((void *)0);
}

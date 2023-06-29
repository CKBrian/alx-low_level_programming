#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Limit of string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}

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
	int k, i = 0;

	for (k = 0; dest[k] != '\0' && k < n; k++)
	{
		dest[k] = src[i];
		i++;
	}
	return (dest);
}

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
	int k;

	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}

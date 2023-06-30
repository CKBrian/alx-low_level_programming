#include "main.h"
/**
 * _strncat - Appends n charactes from 'src' string to 'dest' string
 * @dest: Destination string to be appended to
 * @src: Source string to be appended
 * @n: String limit to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (k = 0; k < n; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

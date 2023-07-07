#include "main.h"
/**
 * _memcpy - Copies a block of memory from @src to @dest
 * @dest: Adress of destination for copied memory
 * @src: Adress of memory to be copied
 * @n: Size of memory to copy
 * Return: Pointer to @dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int N = n;

	for (i = 0; i < N; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

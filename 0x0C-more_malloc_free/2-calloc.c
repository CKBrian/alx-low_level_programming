#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of array elements
 * @size: Size of array elements in bytes
 * Return: Pointer to allocated memory else nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb  * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	ptr[98] = '\0';
	return (ptr);
}

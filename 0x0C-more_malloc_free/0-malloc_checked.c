#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Integer number
 * Return: Pointer to allocated memory else nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(b) * 1);

	if (p != NULL)
	{
		exit(98);
	}
	return (p);
}

#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to an 2-d array of integers
 * @width: width of array
 * @height: Height of array
 * Return: Pointer to an array & on failure NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return ((void *)0);

	p = malloc(height * sizeof(p));
	for (j = 0; j < height; j++)
	{
		p[j] = malloc(width * sizeof(int));
	}
	if (p == NULL)
	{
		for (i = 0; i <= j; i++)
		{
			free(p[i]);
		}
		free(p);
		return ((void *)0);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}

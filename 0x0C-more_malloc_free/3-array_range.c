#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function that creates an array of strings
 * @min: Lowest possible integer
 * @max: Maximum possible integer
 * Return: Pointer to an int array else NULL
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	size = max - min + 1;
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

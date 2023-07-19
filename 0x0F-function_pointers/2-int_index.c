#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Pointer to an integer array
 * @size: size of array
 * @cmp: Pointer to a function used to compare values
 * Return: -1  if false otherwise array element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, Index;

	if (!(array == NULL || size <= 0 || cmp == NULL))
	{
		for (i = 0; i < size; i++)
		{
			Index = cmp(array[i]);
			if (Index == 1)
				return (i);
		}
	}

	return (-1);
}

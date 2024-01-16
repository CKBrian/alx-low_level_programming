#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int l_bd, u_bd, i, jump_int, idx = size - 1;

	if (array == NULL)
		return (-1);
	jump_int = sqrt(size);
	for (i = 0; i < idx; i += jump_int)
	{
		if (value <= array[i])
		{
			l_bd = i - jump_int;
			u_bd = i;
			printf("Value found between indexes [%d] and [%d]\n", l_bd, u_bd);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (value > array[size - 1])
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		printf("Value found between indexes [%d] and [%d]\n", i, i + 4);
		return (-1);
	}

	/* linear search algorithm*/
	for (i = l_bd; i <= u_bd ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

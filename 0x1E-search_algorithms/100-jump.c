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
	int l_bd, u_bd, i, interval, idx = size - 1;

	if (array == NULL)
		return (-1);
	interval = sqrt(size);
	for (i = 0; i <= idx || (i > idx && value <= array[idx]); i += interval)
	{
		if (value == array[0] && i == 0)
			continue;
		if ((value <= array[i] && i <= idx) || (i > idx && value <= array[idx]))
		{
			l_bd = i - interval;
			u_bd = i;
			printf("Value found between indexes [%d] and [%d]\n", l_bd, u_bd);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	/* checks if value searched is out of range */
	if (value > array[idx])
		return (-1);

	/* linear search algorithm*/
	for (i = l_bd; i <= u_bd && i <= idx; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

#include "search_algos.h"
/**
 * min - returns the minimum number
 * @num1: first number
 * @num2: second number
 * Return: number
 */
size_t min(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}
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
	size_t l_bd, u_bd, i, interval, idx = size - 1;

	if (array == NULL || size == 0 || value < array[0])
		return (-1);
	interval = sqrt(size);
	for (i = 0; i <= idx || (i > idx /*&& value <= array[idx]*/); i += interval)
	{
		if (value == array[0] && i == 0)
			continue;
		if ((value <= array[i] && i <= idx) || (i > idx /*&& value >= array[idx]*/))
		{
			l_bd = i - interval;
			u_bd = i;
			printf("Value found between indexes [%ld] and [%ld]\n", l_bd, u_bd);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	/* linear search algorithm*/
	for (i = l_bd; i <= min(u_bd, idx); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0 || value < array[0])
		return (-1);
	while (value >= array[low])
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (value > array[high])
			break;
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			return (pos);
		}
		else if (value > array[pos])
		{
			low = pos + 1;
		}
		else if (value < array[pos])
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

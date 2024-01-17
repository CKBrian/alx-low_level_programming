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
 * print_arr - prints the searched array
 * @array: pointer to the first element of the array to search in
 * @l_bound: array lower boundary
 * @u_bound: array upper boundary
 * Return: nothing
 */
void print_arr(int *array, int l_bound, int u_bound)
{
	int i;

	printf("Searching in array: ");
	for (i = l_bound; i <= u_bound; i++)
	{
		printf("%d", array[i]);
		if (i < u_bound)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * search_algorithm - recursively searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @l_bound: array lower boundary
 * @r_bound: array upper boundary
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */
int search_algorithm(int *array, size_t l_bound, size_t r_bound, int value)
{
	int mid, res;

	/*find the midpoint upperbound and lower bound*/
	mid = (l_bound + r_bound) / 2;

	/*terminal case*/
	if (l_bound > r_bound)
		return (-1);
	print_arr(array, l_bound, r_bound);

	/*check if the value is greater than or less than the midpoint*/
	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		res = search_algorithm(array, l_bound, mid - 1, value);
	else if (value > array[mid])
		res = search_algorithm(array, mid + 1, r_bound, value);

	return (res);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{

	size_t low = 0, high = size - 1, pos = 1;

	if (array == NULL || value < array[0])
		return (-1);
	while (pos < high || (pos > high && value <= array[high]))
	{
		if (value <= array[pos] || (pos > high && value <= array[high]))
		{
			low = pos / 2;
			high = min(pos, high);
			printf("Value found between indexes [%ld] and [%ld]\n",
					low, high);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		pos *= 2;
	}
	return (search_algorithm(array, low, high, value));
}


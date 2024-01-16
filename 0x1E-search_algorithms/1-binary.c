#include "search_algos.h"
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
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l_bound = 0, r_bound;

	if (array == NULL)
		return (-1);

	r_bound = size - 1;

	return (search_algorithm(array, l_bound, r_bound, value));
}

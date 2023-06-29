#include "main.h"
/**
 * reverse_array - Reverses integers in an integer array
 * @a: an array os integers
 * @n: number of elements to swap
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, k = 0, j = 0;
	int length, mid, first, last;
	/* Define the midpoint */
	length = n - 1;
	mid = (length / 2) + 1;

	/* copy the string in reverse order to the s[] array */
	for (i = length; i >= mid; i--)
	{
		last = a[i];
		first = a[k];
		a[i] = first;
		a[k] = last;
		k++;
		j++;
	}
}

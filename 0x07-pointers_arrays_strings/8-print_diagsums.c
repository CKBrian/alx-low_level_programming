#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Writes the sum of two diagnals of square matrix
 * @a: The integer matrix with numbers
 * @size: Number of numbers to be summed in each matrix
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, k = size - 1;
	int b = 0;
	int c = 0;

	for (i = 0; i < size; i++)
	{
		b += *(a + i * size + i);
	}
	i = 0;
	for (; k >= 0; k--)
	{
		c += *(a + i * size + k);
		i++;
	}
	printf("%d, %d \n", b, c);
}

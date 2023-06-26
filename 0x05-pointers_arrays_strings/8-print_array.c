#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an integers array
 * @a: Integer array pointer
 * @n: Number of elemets to be printed
 * Return: Void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m != 0)
		{
		printf(", %d", a[m]);
		}
		else
			printf("%d", a[m]);
	}
	printf("\n");

}

#include "main.h"
/**
 * print_to_98 - Prints natural numbers 'n' to 98
 * @n: Number to be printed
 * Return: Void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}

#include "main.h"
/**
 * print_times_table - Prints 'n' times table from '0'
 * @n: Size of times table
 * Return: Void
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (j != 0)
			{
				if (k < 10)
					printf(",   %d", k);
				else if (k >= 10 && k < 100)
					printf(",  %d", k);
				else if (k >= 100)
					printf(", %d", k);
			}
			else
			{
				printf("%d", k);
			}
		}
		putchar ('\n');
	}
	}
}

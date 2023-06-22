#include "main.h"

/**
 * print_most_numbers - Writes numbers 0 to 9 then a new line
 * Return: Void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		else
		{
			_putchar (a);
		}
	}
	_putchar ('\n');
}

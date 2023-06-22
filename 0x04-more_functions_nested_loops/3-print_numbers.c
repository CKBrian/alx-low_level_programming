#include "main.h"

/**
 * print_numbers - Writes the numbers from 0 to 9 followed by new line
 * Return: void
 */
void print_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		_putchar (d);
	}
	_putchar ('\n');
}

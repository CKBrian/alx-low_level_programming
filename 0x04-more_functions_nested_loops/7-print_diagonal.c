#include "main.h"

/**
 * print_diagonal - Draws a diagonal line n terminal
 * @n: Number of times "\\" is printed
 * Return: Void
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar (92);
		_putchar ('\n');
	}
	_putchar ('\n');
}

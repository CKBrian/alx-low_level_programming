#include "main.h"

/**
 * print_diagonal - Draws a diagonal line n terminal
 * @n: Number of times "\\" is printed
 * Return: Void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
		if (b != 1)
		{
		_putchar(' ');
		}
		if (b == a)
		{
		_putchar (92);
		_putchar ('\n');
		}
		}
	}
	}
	_putchar ('\n');
	
}

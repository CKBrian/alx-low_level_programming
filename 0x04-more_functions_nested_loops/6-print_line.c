#include "main.h"

/**
 * print_line - draws a straight line
 * @n: Number of times character'_' is repeated
 * Return: Void
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar (95);
	}
	_putchar ('\n');
}

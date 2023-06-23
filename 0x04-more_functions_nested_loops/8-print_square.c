#include "main.h"

/**
 * print_square - Prints the square followed by new line
 * @size: Size of square variable
 * Return: Void
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}

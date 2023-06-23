#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: Defines size of triangle
 * Return: Void
 */

void print_triangle(int size)
{
	int height, base, i;

	if (size > 0)
	{
	for (height = 1; height <= size; height++)
	{

		for (base = size; base > height; base--)
		{
			_putchar (' ');
		}
		i = size - base;
		for (; i < size; i++)
		{
		_putchar ('#');
		}
		_putchar ('\n');
	}
	}
	else
	{
		_putchar ('\n');
	}
}

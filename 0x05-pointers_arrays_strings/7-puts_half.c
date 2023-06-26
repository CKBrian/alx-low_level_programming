#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 * Return: Void
 */
void puts_half(char *str)
{
	int i, length, m;

	for (i = 0; str[i] != '\0'; i++)
	{ }

	length = i;

	if (i % 2 == 0)
	{
		m = i / 2;
		for (; m < length; m++)
		{
			_putchar (str[m]);
		}
	}
	else
	{
		m = (length - 1) / 2;
		for (; m < length; m++)
		{
			_putchar (str[m]);
		}
	}
	_putchar ('\n');
}

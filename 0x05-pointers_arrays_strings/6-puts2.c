#include "main.h"
/**
 * puts2 - Print every other character of a string from first character
 * @str: Pointer variable
 * Return: Void
 */
void puts2(char *str)
{
	int i, length, k;

	for (i = 0; str[i] != '\0'; i++)
	{ }

	length = i;

	for (k = 0; k < length; k += 2)
	{
		_putchar (str[k]);
	}
	_putchar ('\n');
}

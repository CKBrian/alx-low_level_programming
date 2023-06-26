#include "main.h"
/**
 * puts - Writes a string to stdout
 * @str: String
 * Return: Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}

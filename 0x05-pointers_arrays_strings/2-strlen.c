#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: String array
 * Return: 0 always
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	_putchar (i + '0');
	return (0);
}

#include <stdio.h>

/**
 * main - Prints "all numbers in base 16 in lower case"
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar (i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}

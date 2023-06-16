#include <stdio.h>

/**
 * main - prints "'a' to 'z' then 'A' to 'Z' followed by a new line"
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a', C = 'A';

	while (c <= 'z')
		{
		putchar(c);
		c++;
		}

	while (C <= 'Z')
	{
		putchar (C);
		C++;
	}

	putchar ('\n');

	return (0);
}

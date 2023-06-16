#include <stdio.h>

/**
 * main - Prints "all alphabetical letters except 'q' and 'e'"
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar (c);
		c++;
	}

	putchar ('\n');
	return (0);
}

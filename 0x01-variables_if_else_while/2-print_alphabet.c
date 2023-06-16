#include <stdio.h>

/**
 * main - Prints alphabet letters"a to z"
 *
 *Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Prints "all possible different combinations of two digits."
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		for (k = i + 1; k <= 9; k++)
		{
		putchar (i + '0');
		putchar (k + '0');
		if (i == 8 && k == 9)
		{
			continue;
		}
		putchar (',');
		putchar (' ');

		}
	}
	putchar ('\n');
	return (0);
}

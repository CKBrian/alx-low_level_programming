#include <stdio.h>

/**
 * main - Prints "a program that prints all possible
 * different combinations of three digits"
 * Return: 0
 *
 */

int main(void)
{
	int x, j, k;

	for (x = 0; x <= 7; x++)
	{
		for (j = x + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
			putchar (x + '0');
			putchar (j + '0');
			putchar (k + '0');
			if (x == 7 && j == 8 && k == 9)
				{
				continue;
				}
			putchar (',');
			putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}

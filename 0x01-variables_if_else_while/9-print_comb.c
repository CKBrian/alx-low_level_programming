#include <stdio.h>

/**
 * main - Prints " all possible combinations of single-digit numbers"
 *
 * Return: 0
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '9')
		{continue;
		}
	putchar (i);
	putchar (',');
	i++;
	}
	putchar ('\n');
	return (0);
}

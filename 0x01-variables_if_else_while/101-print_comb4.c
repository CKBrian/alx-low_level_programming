#include <stdio.h>

/**
 * main - Prints "a program that prints all possible different combinations of three digits"
 * Return: 0
 *
 * */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		/*for (k = 0; k <= 9; k++)*/
			putchar (i + '0'); putchar (j + '0'); /*putchar (k + '0');*/
		}
	}
	putchar ('\n');
	return (0);
}

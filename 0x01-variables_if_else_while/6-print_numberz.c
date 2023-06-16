#include <stdio.h>

/**
 * main - Prints "all single digits from 0 to 10 using putchar"
 * @i: First member
 * Return: 0
 *
 */


int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar (i + '0');
	i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 and 5 below 1024
 * Return: 0 always
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = i + j;
	}
	printf("%d\n", j);
	return (0);
}

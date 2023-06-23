#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 * Return: 0 always
 */

int main(void)
{
	long int num = 612852475143;
	long int j;

	while (num % 2 == 0)
	{
		num = num / 2;
		printf("2,");
	}

	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			printf("%ld,", j);
			num = num / j;
		}
	}
	printf("%ld\n", num);

	return (0);
}

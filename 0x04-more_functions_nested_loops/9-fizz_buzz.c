#include <stdio.h>

/**
 * main - Write the multiples of 3 and 5 as "Fizz" and "Buzz" respectively
 *
 * Return: 0
 */

int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

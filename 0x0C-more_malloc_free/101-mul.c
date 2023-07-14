#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Multiplies two positive numbers
 * @argv: Pointer to array of numbers
 * @argc: Argument count
 * Return: Product of arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul, len, i, j, carry = 0;
	char *product;

	if (argc == 3 && (*argv[1] >= '0' && *argv[1] <= '9') &&
		(*argv[2] >= '0' && *argv[2] <= '9'))
	{

	/* strlen counter for input arguments */
	for (num1 = 0; argv[1][num1] != '\0'; num1++)
	{}
	for (num2 = 0; argv[2][num2] != '\0'; num2++)
	{}
	len = num1 + num2;
	product = malloc(sizeof(*product) * (len + 1));
	if (product == NULL)
		return (1);
	/* Multiplication function argv[1] = 25 & argv[2] = 32*/
	product[len] = '\0';
	num1--;
	num2--;
	len--;
	for (i = num1; i >= 0; i--)
	{
		for (j = num2; j >= 0; j--)
		{
			mul = (argv[1][i] - '0') * (argv[2][j] - '0');
			if (mul > 9)
			{
				product[len] = carry + mul%10 + '0';
				carry = mul/10;
				len--;

			}
			else
			{
				product[len] = carry + mul + '0';
				len--;
			}

		}
	product[len] = carry + '0';
	len++;
	
	}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; product[i] != '\0'; i++)
	{
		_putchar (product[i]);
	}
	_putchar ('\n');

	return (0);
}

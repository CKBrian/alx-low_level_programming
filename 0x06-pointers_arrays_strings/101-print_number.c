#include "main.h"
/**
 * print_number - Prints a number using _putchar function alone
 * @n: Number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	int i, m, div = n;
	int num, j = i, dvs = 1;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	for (i = 0; div != '\0'; i++)
	{
		div /= 10;
	}
	m = i;
	j = i;
	for (; m > 0; m--)
	{
	if (i == 1)
	{
		num = n % 10;
		_putchar (num + '0');
		return;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar ('-');
	}
	while (j > 1)
	{
		dvs *= 10;
		j--;
	}
	num = n / dvs;
	_putchar (num + '0');
	n = n - (num * dvs);
	i--;
	}
}
	}
	while (j > 1)
	{
		dvs *= 10;
		j--;
	}
	num = n / dvs;
	_putchar (num + '0');
	n = n - (num * dvs);
	_print(n, i - 1);
}

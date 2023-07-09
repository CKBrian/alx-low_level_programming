#include "main.h"
/**
 * _print - Prints number n ueing recursion
 * @n: Number to be printed
 * @i: Number of digits contained in n
 * Return: Nothing
 */
void _print(int n, int i)
{
	int num, j = i, dvs = 1;

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
	_print(n, i - 1);
}
/**
 * print_number - Calls function _print
 * @n: Number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	int i, div = n;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	for (i = 0; div != '\0'; i++)
	{
		div /= 10;
	}
	_print(n, i);
	_putchar ('\n');
}

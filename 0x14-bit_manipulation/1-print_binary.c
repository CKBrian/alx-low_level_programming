#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int track;
	int i, is_bit = 0;

	for (i = 63; i >= 0; i--)
	{
		track = n >> i;
		if (track == 1)
			is_bit = 1;
		else if (is_bit == 0 && i == 0)
			_putchar('0');
		if (is_bit == 1)
		{
			if (track & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}

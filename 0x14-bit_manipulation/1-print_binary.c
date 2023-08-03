#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int track, flag;
	int span, i, is_bit = 0;

	span = 31;
	track = 1 << (span - 1);
	for (i = 0; i < span; i++)
	{
		flag = (n & track);
		if (flag == track)
			is_bit = 1;
		else if (is_bit == 0 && i == (span - 1))
			_putchar('0');
		if (is_bit == 1)
		{
			if (flag == track)
				_putchar('1');
			else
				_putchar('0');
		}
		track >>= 1;
	}
	_putchar('\n');

}

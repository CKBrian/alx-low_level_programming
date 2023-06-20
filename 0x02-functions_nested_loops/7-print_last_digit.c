#include "main.h"

/**
 * print_last_digit - Writes last digit of a number
 * @int: Input character
 * Return: value of last digit
 */

int print_last_digit(int r)
{
	int lDigit = r % 10;

	if (lDigit > 0)
		{
		_putchar (lDigit + '0');
		return (lDigit);
		}
}

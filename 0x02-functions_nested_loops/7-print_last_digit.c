#include "main.h"

/**
 * print_last_digit - Writes last digit of a number
 * @int: Input character
 * Return: value of last digit
 */

int print_last_digit(int r)
{
	int lDigit;

	lDigit = r % 10;

	if (lDigit < 0)
		{
		return (lDigit * -1);
		_putchar (lDigit + '0');
		}
	else
	{
		_putchar (lDigit + '0');
		return (lDigit);
	}

}

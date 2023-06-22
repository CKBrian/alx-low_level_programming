#include "main.h"

/**
 * more_numbers - Writes 10 times the numbers 0 to 14 each in a new line
 * Return: Void
 */

void more_numbers(void)
{
	int i, n, m;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 10; n++)
		{
			if (n < 10)
			{
			_putchar (n + '0');
			}
			else
			{
			for (m = 0; m <= 4; m++)
			{
			_putchar (49);
			_putchar ('0' + m);
			}
			}
		}
		_putchar ('\n');
	}
}

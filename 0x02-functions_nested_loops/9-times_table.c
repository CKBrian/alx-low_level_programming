#include "main.h"
/**
 * times_table - Writes the result of 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i , j, k, l, m;
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		l = j * i;
		if (l > 0)
		{
			k = l % 10;
			m = (l - k)/10;
			_putchar (44);
			_putchar (32);
			_putchar (m + '0');
			_putchar (k + '0');

		}
		else
		{
		if (j != 0)
		{
			_putchar (44);
			_putchar (32);
			_putchar (32);
		}
		_putchar(l + '0');
		}
	}
	_putchar ('\n');
	}
}

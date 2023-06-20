#include "main.h"

/**
 * jack_bauer - Writes every minute of the day
 *
 * Return: 
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++ )
	{
		for (m = 0; m < 60; m++)
		{
		if (h < 10 && m < 10)
		{
			_putchar ('0');
			_putchar (h + '0');
			_putchar (':');
			_putchar ('0');
			_putchar (m + '0');
		}
		else if (h < 10 && m > 10)
		{
		_putchar ('0');
		_putchar (h + '0');
		_putchar (':');
		_putchar (m + '0');
		}
		else if (h > 10 && m  < 10)
		{
		_putchar (h + '0');
		_putchar (':');
		_putchar ('0'); 
		_putchar (m + '0');
		}
		else
		{
		_putchar (h + '0');
		_putchar (':');
		_putchar (m + '0');
		}
		_putchar ('\n');
		}
	}
}

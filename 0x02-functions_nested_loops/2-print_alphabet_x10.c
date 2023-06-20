#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar (x);
		}
		putchar ('\n');
	}
}

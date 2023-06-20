#include <stdio.h>

/**
 * main - Prints "'_putchar' followed by new line"
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar";
	int z;

	for (z = 0; z < 9; z++)
	{
	putchar (word[z]);
	}
	putchar ('\n');
	return (0);
}

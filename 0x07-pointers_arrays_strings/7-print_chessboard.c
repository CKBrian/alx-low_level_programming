#include "main.h"
/**
 * print_chessboard - Prints chessboard
 * @a: Adress to string a
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int col, row;

	for (col =  0; col < 8; col++)
	{
		for (row = 0; row < 8; row++)
		{
			_putchar (a[col][row]);
		}
		_putchar ('\n');
	}
}

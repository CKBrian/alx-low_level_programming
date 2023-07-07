#include "main.h"

/**
 * _abs - Writes absolute value of an integer
 * @a: Integer used to test for absolute value
 * Return: 0 always
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else
	{
		return (-1 * a);
	}
}

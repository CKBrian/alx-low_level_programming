#include "main.h"

/**
 * _islower - Prints return value of 1 if character c is lowercase
 * @c: First member to be checked
 * Return: 0 lowercase 1 uppercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

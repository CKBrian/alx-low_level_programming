#include "main.h"

/**
 * _isupper - Prints return value of 1 if character c is uppercase
 * @c: First member to be checked
 * Return: 1 uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

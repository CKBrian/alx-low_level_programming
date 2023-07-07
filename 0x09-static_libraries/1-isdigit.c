#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: Integer to be tested
 * Return: 1 if c is a digit & 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >=  48)
		return (1);
	return (0);
}

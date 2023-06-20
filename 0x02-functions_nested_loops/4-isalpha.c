#include "main.h"

/**
 * _isalpha - Writes the return value of character c
 * @c: The character to be tested.
 *
 * Return: on success 1 on failure 0
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && C >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

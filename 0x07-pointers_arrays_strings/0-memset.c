#include "main.h"
/**
 * _memset - Fills memory with constant byte
 * @s: Pointer to string memory
 * @b: Value to be initialised at the memory location of @s
 * @n: Size of string or memor to be filled
 * Return: String s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int k = (int) n;

	for (i = 0; i < k; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
/**
 * _strspn - Gets the length of a substring
 * @s: String to be searched
 * @accept: Character bytes to be searched and counted
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
		if (s[i] == accept[k])
		{
			size++;
			break;
		}
		if (accept[k] == '\0')
			break;
		}
	}
	return (size);
}

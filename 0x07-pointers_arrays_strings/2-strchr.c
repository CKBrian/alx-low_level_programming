#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string array to be searched
 * @c: Character to be searched
 * Return: Adress to the fist occurence of char c
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return ((char *)0);
}

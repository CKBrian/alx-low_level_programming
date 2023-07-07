#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
		break;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

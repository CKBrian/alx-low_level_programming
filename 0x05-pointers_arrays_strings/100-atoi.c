#include "main.h"
/**
 * int _atoi - Converts a string to a character
 * @s: String to be converted
 * Return: 0 always
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			return ((int)s[i]);
			break;
		}
		else
			return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
	if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '+' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
			continue;
		else if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
		{
			return ('-');
		}
		else if (s[i] >= '0' && s[i] <= '9')
			return ((int)s[i]);
	}
	}
	return (0);
}

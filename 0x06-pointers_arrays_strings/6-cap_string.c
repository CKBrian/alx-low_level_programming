#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to a string array
 * Return: str
 */
char *cap_string(char *str)
{
int i, k;
char period[13] = {' ', ';', '.', '!', ',', '?', '"', '(', ')', '\t', '\n'};
period[11] = '{';
period[12] = '}';

	/* Capitalize string */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 0; str[i] != '\0'; i++)
	{
	for (k = 0; k < 13; k++)
	{
		if (str[i] == period[k] &&
		(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		}
	}
	return (str);
}

#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to a string array
 * Return: str
 */
char *cap_string(char *str)
{
	int i, k;
	char period[] = {' ', ';', '.', '!', ',', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	/* Capitalize string */
	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 13; k++)
		{
			if (str[i] == period[k] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
		/*if ((str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n') &&
		(str[i] >= 'a' && str[i] <= 'z'))
	{
		str[i] -= 32;
	}*/
	}
	return (str);
}

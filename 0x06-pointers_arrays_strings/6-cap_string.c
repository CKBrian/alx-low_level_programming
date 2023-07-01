#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to a string array
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i - 1] == ',' ||
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
	}
	}
	return (str);
}

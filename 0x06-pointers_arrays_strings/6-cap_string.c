#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to a string array
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j, k;

	/* Remove '\t' */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
		{
			for (j = 0; str[j] != '\t'; j++)
			{}

			str[j] = ' ';
			k = j--;
			for (; k > j && str[k] != '\0'; k++)
			{
				str[k + 1] = str[k + 1];
			}
		}
	}
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
		*(str + i) -= 32;
	}
	}
	return (str);
}

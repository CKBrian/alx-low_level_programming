#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to a string array
 * Return: str
 */
char *cap_string(char *str)
{
int i, k;
char period[13] = {' ', ';', '.', '!', ',', '?', '"', '(', ')', '{', '}'};
period[11] = '\t';
period[12] = '\n';

	/* Capitalize string */
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

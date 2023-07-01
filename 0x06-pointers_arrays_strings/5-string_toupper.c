#include "main.h"
/**
 * string_toupper - Changes string from lower to upper case
 * @str: Pointer to string to be converted
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}

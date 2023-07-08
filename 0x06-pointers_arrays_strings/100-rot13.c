#include "main.h"
/**
 * rot13 - Encodes a string replacing with 13th character in ascii
 * @str: Pointer to string to be encoded
 * Return: String
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
		if ((str[i] > 'm' && (str[i] >= 'a' && str[i] <= 'z')) ||
			(str[i] > 'M' && (str[i] >= 'A' && str[i] <= 'Z')))
		{
			str[i] -= 13;
			break;
		}
		str[i] += 13;
		break;
		}
	}
	return (str);
}

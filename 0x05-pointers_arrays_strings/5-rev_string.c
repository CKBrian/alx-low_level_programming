#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String-containing variable
 * Return: Void
 */
void rev_string(char *s)
{
	int length;
	char *str;
	int i, j = 0;
	/* Calculates lenght of string in s[] array */
	for (i = 0; s[i] != '\0'; i++)
	{
	}

	/* create a dynamic character array with the correct size */
	length = i;
	str[];

	/* copy the string in reverse order to the str[] array */
	for (i = length; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}

	/* copy the reversed string back to the s[] array */
	for (j = 0; j < length; j++)
	{
		s[j] = str[j];
	}
}

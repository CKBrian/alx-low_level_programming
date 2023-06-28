#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String-containing variable
 * Return: Void
 */
void rev_string(char *s)
{
	int i, k = 0, j = 0;
	int length, mid, first, last;
	/* Calculates lenght of string in s[] array */
	for (i = 0; s[i] != '\0'; i++)
	{
	}

	/* Define the midpoint */
	length = i - 1;
	mid = (length / 2) + 1;

	/* copy the string in reverse order to the s[] array */
	for (i = length; i >= mid; i--)
	{
		last = s[i];
		first = s[k];
		s[i] = first;
		s[k] = last;
		k++;
		j++;
	}
}

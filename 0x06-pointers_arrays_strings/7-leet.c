#include "main.h"
/**
 * leet - Encodes string into 1337
 * @s: String to be encoded
 * Return: String s
 */
char *leet(char *s)
{
	int i, k;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[i] == lower[k] || s[i] == upper[k])
			{
				s[i] = encode[k];
				break;
			}
		}
	}
	return (s);
}

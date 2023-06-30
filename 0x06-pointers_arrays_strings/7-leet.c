#include "main.h"
/**
 * leet - Encodes string into 1337
 * @s: String to be encoded
 * Return: String s
 */
char *leet(char *s)
{
	int i;
	char *a, *b, *c, *d, *e;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] == 'a' || s[i] == 'A') || (s[i] == 'e' || s[i] == 'E') ||
			(s[i] == 'o' || s[i] == 'O') || (s[i] == 't' || s[i] == 'T') ||
			(s[i] == 'l' || s[i] == 'L'))
		{
			(s[i] == 'a' || s[i] == 'A') = '4';
			(s[i] == 'e' || s[i] == 'E') = '3';
			(s[i] == 'o' || s[i] == 'O') = '0';
			(s[i] == 't' || s[i] == 'T') = '7';
			(s[i] == 'l' || s[i] == 'L') = '1';
		}
	}
	return (s);
}

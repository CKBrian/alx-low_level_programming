#include "main.h"
/**
 * leet - Encodes string into 1337
 * @s: String to be encoded
 * Return: String s
 */
char *leet(char *s)
{
	int i;
	int *a;


	for (i = 0; s[i]; i++)
	{
		*a = (s[i] == 'a');
		if ((s[i] == 'a' || s[i] == 'A') || (s[i] == 'e' || s[i] == 'E') ||
			(s[i] == 'o' || s[i] == 'O') || (s[i] == 't' || s[i] == 'T') ||
			(s[i] == 'l' || s[i] == 'L'))
		{
			/* A = 65, E = 69, O = 79, T = 84, L = 76 */
			/* '4' = 64, '3' = 63, '0' = 60, '7' = 67, '1' = 61 */
			s[*a] = '4';
			/*(s[i] == 'e' || s[i] == 'E') = '3';
			(s[i] == 'o' || s[i] == 'O') = '0';
			(s[i] == 't' || s[i] == 'T') = '7';
			(s[i] == 'l' || s[i] == 'L') = '1';*/
		}
	}
	return (s);
}

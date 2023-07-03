#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * @haystack: Adress to string to search
 * @needle: Substring to find
 * Return: Adress to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k, m, i = 0;

	for (m = 0; needle[m] != '\0'; m++)
	{}
	for (j = 0; haystack[j] != '\0'; j++)
	{
	for (k = 0; needle[k] != '\0'; k++)
	{
	if (haystack[j] == needle[0])
	{
	for (; (haystack[j] == needle[i] && needle[i] != '\0'); i++)
	{
		j++;
		if (i == m)
			return (&needle[i]);
	}
	}
	}
	}
	return ((void *)0);
}

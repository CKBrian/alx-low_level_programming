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
	if (haystack[j] == needle[i])
	{
		if (i == (m - 1))
			return (&haystack[j - m]);
		i++;
		j++;
	}
	}
	}
	return ((void *)0);
}

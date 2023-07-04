#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: Address to string to search
 * @needle: Substring to find
 * Return: Address to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j, m;

    for (m = 0; needle[m] != '\0'; m++)
    {}

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }

        if (j == m)
            return &haystack[i];
    }

    return ((void *)0);
}


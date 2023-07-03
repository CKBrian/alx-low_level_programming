#include "main.h"

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string array to be searched
 * @c: Character to be searched
 * Return: Pointer to the first occurrence of char c
 */
char *_strchr(char *s, char c)
{
    int k;

    for (k = 0; s[k] != '\0'; k++)
    {
        if (s[k] == c)
            return (*s[k]);
    }

    return NULL; 
}


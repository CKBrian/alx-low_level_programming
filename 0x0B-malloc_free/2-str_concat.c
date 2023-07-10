#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Pointer to new string memory otherwise NULL
 */

char *concat(char *s1, char *s2);
char *str_concat(char *s1, char *s2)
{

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	return (concat(s1, s2));
}
/**
 * concat - Concatenates strings s1 and s2 and returns new string adress
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Pointer to new string memory otherwise NULL
 */
char *concat(char *s1, char *s2)
{
	char *s3;
	int i, j, size;

	if (s1 == NULL && s2 == NULL)
	{
		s3 = "";
		return (s3);
	}
	/* s1 and s2 array size counter */
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	size = j + i + 1;
	s3 = malloc(size * sizeof(char));
	if (s3 == NULL)
	{
		return ((void *)0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		*(s3 + i) = *(s2 + j);
		i++;

	}
	s3[i] = '\0';
	return (s3);

}

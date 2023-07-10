#include "main.h"
/**
 * create_array - Creates and initializes an array of chars
 * @size: Size of array to be assigned dynamically
 * @c: Value to initialize array with
 * Return: Pointer to an array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	if (size == 0)
	{
		return ((void *)0);
	}
	str = malloc(size + sizeof(char));
	for (i = 0; i < 98; i++)
	{
		*(str + i) = c;
	}
	return (str);
}

#include "main.h"
/**
 * set_string - Sets value of a pointer to a char
 * @s: Pointer to a pointer string
 * @to: Adress to a string
 * Return : Void
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] > '\0'; i++)
	{
		*s = to;
	}
}

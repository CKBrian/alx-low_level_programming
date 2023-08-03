#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: Nothing
 */
int get_endianness(void)
{
	int num = 8;
	char *p_test = (char *)&num;

	if (p_test[0] == 1)
		return (0);
	else
		return (1);
}

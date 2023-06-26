#include "main.h"
/**
 * swap_int - Swaps values of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int *c = a;
	*a = *b;
	*b = *c;
}

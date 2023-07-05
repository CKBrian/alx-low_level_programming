#include "main.h"
/**
 * _pow_recursion - Returns 'x'raised to power'y'
 * @x: Value to be raised to power y
 * @y: Index to raise int x to the power of
 * Return: Value of x to power 9
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}

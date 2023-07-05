#include "main.h"
/**
 * factorial - Prints a factorial of a given number
 * @n: Number to be factorialised
 * Return: Factorial product
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

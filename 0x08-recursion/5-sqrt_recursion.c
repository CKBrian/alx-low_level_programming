#include "main.h"
/**
 * _sqrt_recursion - Returns square root of a number
 * @n: Number to be square rooted
 * Return: Square root of @n
 */
int _sqrt_recursion(int n)
{
	const int a = n;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n * n == a)
		return (n);
	return ( n * n +(_sqrt_recursion(n - 1)));


}

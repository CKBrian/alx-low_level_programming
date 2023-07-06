#include "main.h"
/**
 * _sqrt - Returns square root of a number a
 * @n: Holds number to test for square root digit
 * @a: Number to be evaluated
 * Return: Value of n
 */
int _sqrt(int n, int a)
{
	if (n == 0)
		return (-1);
	if (n * n == a)
		return (n);
	return (_sqrt(n - 1, a));
	return (-1);

}
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
		return (0);
	return (_sqrt(n, a));


}

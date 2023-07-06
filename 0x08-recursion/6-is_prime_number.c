#include "main.h"
/**
 * _prime - Returns 1 if the input is a prime number and 0 otherwise
 * @n: Input number
 * @b: Integer decrement to check divisibility againest n
 * Return: 1 or 0
 */
int _prime(int n, int b)
{
	if (b == 1)
		return (1);
	else if (n % b == 0)
		return (0);
	return (_prime(n, b - 1));
}
/**
 * is_prime_number - Calls _prime function which checks for prime numbers
 * @n: Input number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int b = n - 1;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, b));
}

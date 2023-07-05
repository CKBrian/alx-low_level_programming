#include "main.h"
/**
 * is_prime_number - Returns 1 if the input is a prime number
 * @n: Input number
 * Return: 1 if is prime number
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (is_prime_number(n) % (n - 1));
	if ((is_prime_number(n) % n-1) != 0)
		return (1);

}

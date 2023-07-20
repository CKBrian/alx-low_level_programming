#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters
 * Return: Integer sum otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list adds;

	if (n <= 0)
		return (0);
	va_start(adds, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(adds, unsigned int);
	}
	va_end(adds);
	return (sum);

}

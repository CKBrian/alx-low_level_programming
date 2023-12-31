#include "variadic_functions.h"
/**
 * print_numbers - Writes numbers
 * @separator: String to be printed between numbers
 * @n: Number of integer function parameters
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list write;

	va_start(write, n);
	for (i = 0; i < n; i++)
	{
	if (separator == NULL)
	{
		printf("%d", va_arg(write, unsigned int));
	}
	else
	{
	if (i == (n - 1))
		printf("%d", va_arg(write, unsigned int));
	else
		printf("%d%s", (va_arg(write, unsigned int)), separator);
	}
	}
	printf("\n");
	va_end(write);
}

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

	if (n <= 0)
		return;

	va_start(write, n);
	for (i = 0; i < n; i++)
	{
	if (separator == NULL)
	{
		if (i == (n - 1))
			printf("%d", va_arg(write, unsigned int));
		else
			printf("%d ", va_arg(write, unsigned int));
	}
	else
	{
	if (i == (n - 1))
		printf("%d", va_arg(write, unsigned int));
	else
		printf("%d%c ", (va_arg(write, unsigned int)), *separator);
	}
	}
	va_end(write);
	printf("\n");
}

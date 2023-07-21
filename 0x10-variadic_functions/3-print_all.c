#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: List of type of arguments passed to function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int j = 0, k = 0;
	va_list arg;
	char *st, *brk = "", *specifier = "cifs";

	va_start(arg, format);
	while (format != NULL && format[j] != '\0')
	{
	k = 0;
	while (specifier[k] != '\0')
	{
		if (format[j] == specifier[k])
		{
			switch (format[j])
			{case 'c':
				printf("%s%c", brk, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", brk, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", brk, va_arg(arg, double));
				break;
			case 's':
				{st = va_arg(arg, char *);
				if (st == NULL)
					printf("%s(nil)", brk);
				printf("%s%s", brk, st);
				break;
				}
			default:
				k++;
				continue;
			}
		brk = ", ";
		}
		k++;
	}
	j++; }
	printf("\n");
	va_end(arg);
}


#include "function_pointers.h"
/**
 * print_name - Funtion that prints a name
 * @name: Pointer to name string
 * @f: Pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}

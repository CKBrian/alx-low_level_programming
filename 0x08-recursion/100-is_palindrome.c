#include "main.h"
/**
 * is_palindrome - Returns 1 if string is palindrome and 0 otherwise
 * @s: Pointer to string to be checked
 * Return: 1 or 0
 */
void _reverse(char *str, char *s)
{
	if (*s == '\0')
		return;
	if (*(str + a) != *(s + i))
		return (0);
	i++;
	a--;
	_reverse(str, s + 1);
	return (1);
}
int is_palindrome(char *s)
{
	int a, i = 0;
	char *str = s;

	a = (_strlen_recursion(s)) - 1;
	if (*s == '\0')
		return (0);
	return(_reverse(str, s));
}

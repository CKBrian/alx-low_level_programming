#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _reverse(char *str, char *s)
{
        if (*s == '\0')
		return;
        _reverse(str + 1, s + 1);
        if (*s < '0')
		*str = *s;
	putchar (*str);
}
void is_palindrome(char *s)
{
        char *str = s;
	int i = 0;
        if (*s == '\0')
		putchar ('n');
        _reverse(str, s);
	while (*str != '\0')
	{
		putchar (*(str + i));
	}
}
int main(void)
{
    int r;

    is_palindrome("level");
    return (0);
}

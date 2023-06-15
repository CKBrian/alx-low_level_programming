#include <unistd.h>

/**
 * main - prints "and that piece of art is useful\" - Dora Korpar,
 *  2015-10-19\n"
 * Return: 1
 */

int main(void)
{
	char *message="and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, message, 59);
	return (1);
}

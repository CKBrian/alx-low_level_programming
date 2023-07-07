#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number of argumrnts program receives
 * @argc: Argument count
 * @argv: Array pointer to program arguments
 * Return: EXIT_SUCCESS if it rums without errors
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

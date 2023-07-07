#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints name of its program
 * @argc: Argument count
 * @argv: String pointer to commandline arguments for the program
 * Return: Returns EXIT_SUCCESS if program compiles without an error
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}

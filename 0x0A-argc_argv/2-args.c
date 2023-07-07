#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all argumrnts it receives
 * @argc: Argument count
 * @argv: Array pointer to program arguments
 * Return: EXIT_SUCCESS if it rums without errors
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s", argv[c]);
		printf("\n");
	}
	exit(EXIT_SUCCESS);
}

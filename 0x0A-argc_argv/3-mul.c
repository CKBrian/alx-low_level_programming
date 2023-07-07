#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints product of arguments it receives
 * @argc: Argument count
 * @argv: Array pointer to program arguments
 * Return: EXIT_SUCCESS if it rums without errors
 */
int main(int argc, char *argv[])
{
	int i, product;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		product = 1;
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	exit(EXIT_SUCCESS);
}

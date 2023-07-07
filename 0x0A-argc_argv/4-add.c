#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints sum of all argumrnts it receives
 * @argc: Argument count
 * @argv: Array pointer to program arguments
 * Return: EXIT_SUCCESS if it rums without errors
 */
int main(int argc, char *argv[])
{
	int c, sum = 0;

	for (c = 1; c < argc; c++)
	{

	/*
	*	if (!(**(argv + (c + 1)) >= '0') && !(**(argv + (c + 1)) <= '9'))
	*	{
	*		printf("Error\n");
	*		break;
	*	}
	*/
		if ((**(argv + c) >= '0' && **(argv + c) <= '9') || **(argv + c) == '-')
		{
			sum += atoi(argv[c]);
		}
		else
		{	printf("Error\n");
			break;
		}
	}
	if (c == argc)
		printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}

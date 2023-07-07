#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * _isnum - Tests if pointed string has integers
 * @s: Pointer to string
 * Return: true if it finds a + or - int else false
 */
bool _isnum(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && s[i] != '-')
			return (false);
	}
	return (true);
}

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
		if (!_isnum(argv[c]))
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		else
			sum += atoi(argv[c]);
	}
	/*
	*	if ((**(argv + c) >= '0' && **(argv + c) <= '9') || **(argv + c) == '-')
	*	{
	*		sum += atoi(argv[c]);
	*	}
	*	else
	*	{	printf("Error\n");
	*		break;
	*	}
	*}
	*/
	if (c == argc)
		printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}

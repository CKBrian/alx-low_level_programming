#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opscode of its own main function
 * @argc: Argument count
 * @argv: Pointer to argument string array
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, byte;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (byte <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	byte = atoi(argv[1]);

	for (i = 0; i < byte; i++)
	{
		if (i == 0)
			printf("%02hhx", *((char *)main + i));
		else
			printf(" %02hhx", *((char *)main + i));
			/*printf(" %p", ((void *)main) + i);*/
	}
	printf("\n");
	return (0);
}

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
	unsigned char *adress = __builtin_return_address(0);
	int i, byte = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (byte <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		printf("%02x ", adress[i]);
	}
	putchar ('\n');
	return (0);
}

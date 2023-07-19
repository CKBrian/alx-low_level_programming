#include "3-calc.h"
/**
 * main - Prints result of the operation
 * @argc: Number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
			argv[2][0] != '*' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
		(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

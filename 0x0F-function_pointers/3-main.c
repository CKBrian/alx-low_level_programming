#include "3-calc.h"
#include "string.h"
#define NON_NUM(num) (strlen(num) != strspn(num, "0123456789"))
/**
 * main - Prints result of the operation
 * @argc: Number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4 || (NON_NUM(argv[1]) || NON_NUM(argv[3])))
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
			argv[2][0] != '*' && argv[2][0] != '%' && argv[2][1] != '\0')
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

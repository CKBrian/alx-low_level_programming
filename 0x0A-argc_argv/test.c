#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_numeric - Checks if a string is a numeric value
 * @str: String to check
 * Return: true if numeric, false otherwise
 */
bool is_numeric(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return false;
    }

    return true;
}

/**
 * main - Prints sum of all arguments it receives
 * @argc: Argument count
 * @argv: Array pointer to program arguments
 * Return: EXIT_SUCCESS if it runs without errors
 */
int main(int argc, char *argv[])
{
    int sum = 0;

    for (int c = 1; c < argc; c++)
    {
        if (!is_numeric(argv[c]))
        {
            printf("Error\n");
            return EXIT_FAILURE;
        }

        sum += atoi(argv[c]);
    }

    printf("%d\n", sum);
    return EXIT_SUCCESS;
}


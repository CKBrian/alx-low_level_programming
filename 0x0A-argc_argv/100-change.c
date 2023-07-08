#include <stdio.h>
#include <stdlib.h>
/**
 * coin_counter - Counts the min possible number of coins for cash change
 * @arr: Pointer to array of cent-coin types
 * @cent: Change in cents
 * Return: Number of coins
 */
int coin_counter(int *arr, int cent)
{
	int i, coins = 0;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if ((arr[i] <= cent) && cent != 0)
		{
			coins += (cent / arr[i]);
			cent %= arr[i];
		}

	}
	return (coins);
}
/**
 * main - Prints the min possible number of cent coins for cash change
 * @argc: Arguments count
 * @argv: Array of argument strings
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int cent, c;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 1)
	{
		printf("0\n");
	}
	else
	{
		c = (coin_counter(arr, cent));
		printf("%d\n", c);
	}
	return (0);
}

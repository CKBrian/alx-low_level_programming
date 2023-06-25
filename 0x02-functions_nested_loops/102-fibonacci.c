#include <stdio.h>
/**
 * main - Prints fibonacci sequence from 1 to 50
 * Return: 0 always
 */
int main(void)
{
	long int i, fNum = 2, sNum = 1, fbSum;

	printf("%ld, %ld, ", sNum, fNum);
	for (i = 1; i <= 48; i++)
	{
		fbSum = fNum + sNum;
		sNum = fNum;
		fNum = fbSum;
		if (i < 48)
		{
			printf("%ld, ", fbSum);
		}
		else
		{
			printf("%ld", fbSum);
		}
	}
	putchar ('\n');

	return (0);
}

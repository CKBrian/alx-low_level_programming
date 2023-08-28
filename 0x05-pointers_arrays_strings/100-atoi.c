#include "main.h"
/**
 * _atoi - Converts a string to a character
 * @s: String to be converted
 * Return: number/integer
 */

int _atoi(char *s)
{
	int i, num = 0, flag = 1, lbreak = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+')
		{

			if (s[i] == '+' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
				i++;
			else if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
				flag = -1;
			while (s[i] >= '0' && s[i] <= '9')
			{
				num += s[i] - '0';
				if (s[i + 1] >= '0' && s[i + 1] <= '9')
				{
					num *= 10;
				}
				else if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				{
					lbreak = 1;
					i++;
					break;
				}
				i++;
			}

		}
		if (lbreak == 1)
		{
			break;
		}
	}
	num *= flag;
	return (num);
}

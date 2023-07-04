#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'm' || str[i] >= 'M')
		{
			str[i] -= 12; 
		}
		str[i] += 12; 
		
	}
	return (0);
}

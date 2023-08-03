#include "main.h"
/**
 * flip_bits - returns the number of bits needed
 * to flip to get from one number to another.
 *
 * @n: first number
 * @m: seconde number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int track1, track2, i;
	unsigned int bits = 0, flag = 0;

	for (i = 63; (int)i >= 0; i--)
	{
		track1 = n >> i;
		track2 = m >> i;
		if (track1 & 1 || track2 & 1)
			flag = 1;

		if (flag == 1)
		{
			if ((track1 & 1) != (track2 & 1))
				bits++;
		}
	}
	return (bits);
}

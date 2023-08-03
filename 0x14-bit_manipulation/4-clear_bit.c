#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to clear bit
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 on success otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, track, clear = 1;

	if (index > 63)
		return (-1);

	track = *n;
	for (i = 0; i < index; i++)
	{
		clear *= 2;
	}
	if (clear > track)
		track = 0;
	else
		track -= clear;
	*n = track;

	return (1);
}

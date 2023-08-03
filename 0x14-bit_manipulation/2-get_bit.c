#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index, starting from 0 of the bit you want to get
 * @n: number to search
 * Return: value of the bit at index index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int track;

	if (index > 63)
		return (-1);
	track = n >> index;
	if (track & 1)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * set_bit - will set the value of a bit to 1 at a given index.
 * @n: The pointer of an unsigned long int
 * @index: The index of the bit
 *
 * Return: 1 for a successful prog run, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}

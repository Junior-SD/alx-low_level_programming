#include "main.h"

/**
 * flip_bits - will return the number of bits you need to flip to get
 * from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitnum;

	for (bitnum = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bitnum++;
	}



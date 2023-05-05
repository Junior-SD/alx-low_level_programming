#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function that converts 
*binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: the converted number or 0
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, int_n;

	int_n = 0;
	x = 0;
	if (!b)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		int_n <<= 1;
		if (b[x] & 1)
			int_n += 1;
		x += 1;
	}
	return (int_n);
}

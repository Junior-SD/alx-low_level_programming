#include <stdio.h>
#include "main.h"

/**
* flip_bits - a function that returns the number of
*bits you would need to flip to get from
*one number to another
* @w: first number
* @y: second number
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int w, unsigned long int y)
{
	unsigned long int i, x;

	x = w ^ y;
	i = 0;
	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}

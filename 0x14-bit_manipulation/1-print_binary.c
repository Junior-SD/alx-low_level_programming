#include <stdio.h>
#include "main.h"

/**
* print_binary - a function that prints the binary
*representation of a number.
* @y: long integer
* Return: nothing
**/

void print_binary(unsigned long int y)
{
	if ((y >> 1) == 0 && y == 0)
	{
		_putchar('0');
		return;
	}
	if (y >> 1 != 0)
		print_binary(y >> 1);
	_putchar((y & 1) + '0');
}

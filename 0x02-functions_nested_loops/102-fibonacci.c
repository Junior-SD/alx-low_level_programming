#include <stdio.h>

/**
 * main - will print the first 50 Fibonacci numbers, starting with 1 and 2
 * then a new line
 * Return: 0 for a successful prog run.
 */
int main(void)
{
	long int x, y, z, next;

	y = 1;
	z = 2;

	for (x = 1; x <= 50; x++)
	{
		if (y != 23065011074)
		{
			printf("%ld, ", y);
		} else
		{
			printf("%ld\n ", y);
		}
		next = y + z;
		y = z;
		z = next;
	}
	return (0);
}

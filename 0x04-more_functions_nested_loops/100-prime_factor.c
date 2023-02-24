#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 for a successful prog run.
 */

int main(void)
{
	long x, number = 612852475143;

	for (x = 2; x <= number; x++)
	{
		if (number % x == 0)
		{
			number = number / x;
			x--;
		}
	}
	printf("%lu\n", x);

	return (0);
}

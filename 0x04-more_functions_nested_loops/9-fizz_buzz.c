#include <stdio.h>
#include "main.h"

/**
 * main - will print the numbers from 1 to 100, then a new line
 * for multiples of 3, it will print 'Fizz' instead of the number
 * for multiples of 5, it will print 'Buzz'
 *
 * Return: 0 for a successful prog run
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}

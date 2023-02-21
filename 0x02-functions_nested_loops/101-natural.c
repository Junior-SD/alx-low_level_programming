#include <stdio.h>

/**
 * main - will calculate and print the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0 for a successful prog run
 */
int main(void)
{
	unsigned long int tot3, tot5, tot;
	int i;

	tot3 = 0;
	tot5 = 0;
	tot = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			tot3 = tot3 + i;
		} else if ((i % 5) == 0)
		{
			tot5 = tot5 + i;
		}
	}
	tot = tot3 + tot5;
	printf("%lu\n", tot);
	return (0);
}

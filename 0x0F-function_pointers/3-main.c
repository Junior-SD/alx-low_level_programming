#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - will calculate operations
 * @argc: the number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 for a successfull program run.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	char x;
	int arg1, arg2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	x = *argv[2];
	if ((x == '/' || x == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);

	printf("%d\n", result);
	return (0);
}

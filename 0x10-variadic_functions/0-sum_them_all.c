#include "variadic_functions.h"

/**
 * sum_them_all - will return the sum of all its parameters
 * @n: The number of argumets passed to the function
 *
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list lst;

	va_start(lst, n);

	for (x = 0; x < n; x++)
		sum += va_arg(lst, int);
	va_end(lst);

	return (sum);
}

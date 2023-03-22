#include "3-calc.h"

/**
 * op_add - will calculate the sum of 2 integers
 * @a: integer 1
 * @b: integet 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - will calculate difference of 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Difference btwn a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - will multiply 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: The result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of div of 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: The remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

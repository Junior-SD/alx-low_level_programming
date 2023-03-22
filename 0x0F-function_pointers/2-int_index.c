#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to be searched
 * @size: The array size
 * @cmp: The pointer to comparing function
 * Return: index of the first element for which the cmp
 * function doesn't return 0, or -1 if not match found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}

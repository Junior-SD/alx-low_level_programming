#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - will excute a function given as a parameter on
 * each array element
 * @array: the array to be iterated over
 * @size: array size
 * @action: pointer function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}

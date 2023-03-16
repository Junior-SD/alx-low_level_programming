#include <stdlib.h>
#include "main.h"

/**
 * *array_range - will create an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored
 *
 * Return: Pointer to the new array
 */

int *array_range(int min, int max)
{
	int x, size;
	int *pnt;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pnt = malloc(sizeof(int) * size);

	if (pnt == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pnt[x] = min++;

	return (pnt);
}

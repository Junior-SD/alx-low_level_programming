#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - will allocate memory using mallc
 * @b: the number of bytes to allocate
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}

#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - will reallocate a memory block using malloc & free
 * @ptr: a pointer to the memmory previously allocated by malloc
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 *
 * Return: the pointer to newly allocated mem block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt1;
	char *pnt2;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pnt1 = malloc(new_size);
	if (!pnt1)
		return (NULL);

	pnt2 = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pnt1[x] = pnt2[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			pnt1[x] = pnt2[x];
	}

	free(ptr);
	return (pnt1);
}

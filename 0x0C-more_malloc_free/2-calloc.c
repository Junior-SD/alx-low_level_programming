#include "main.h"
#include <stdlib.h>

/**
 * *_memset - will fill memory with a constant byte
 * @m: the memory to be filled
 * @a: char to be copied
 * @n: the number of times c is to be copied
 *
 * Return: The pointer to m.
 */
char *_memset(char *m, char a, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		m[x] = a;
	}

	return (m);
}

/**
 * *_calloc - will allocate the memory for an array
 * @nmemb: number of elements in array
 * @size: size of elements
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(size * nmemb);

	if (pnt == NULL)
		return (NULL);

	_memset(pnt, 0, nmemb * size);

	return (pnt);
}

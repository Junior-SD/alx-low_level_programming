#include "lists.h"
#include <stdlib.h>

/**
 * list_len - will return the number of elements in a linked list_t list
 * @h: The pointer to the list_t list
 *
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}

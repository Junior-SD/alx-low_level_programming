#include "lists.h"

/**
 * listint_len - Will return the number of elements in linked listint_t list
 * @h: The linked listto traverse (listin_t)
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Will print all the elements of lists_t list.
 * @h: The listint_t to print
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}

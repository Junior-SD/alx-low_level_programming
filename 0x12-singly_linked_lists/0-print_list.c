#include "lists.h"
#include <stdio.h>

/**
 * print_list - will print all the elements of list_t list
 * @h: pointer to list_t list to be printed
 *
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}

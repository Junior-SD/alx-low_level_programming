#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint_safe -will print a listint_t linked list
 * @head: The list of listint_t type to print
 *
 * Return: The number of nodes in list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		x++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (x);
}

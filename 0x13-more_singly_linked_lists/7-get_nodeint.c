#include "lists.h"

/**
 * get_nodeint_at_index - will return node at a certain index in listint_t
 * @head: The first node in the listint_t list
 * @index: The index of node to be returned
 *
 * Return: The pointer to searched node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (x < index && temp)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}

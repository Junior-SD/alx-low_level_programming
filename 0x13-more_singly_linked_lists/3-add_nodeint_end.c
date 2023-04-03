#include "lists.h"

/**
 * add_nodeint_end - will add a node at the end of the list
 * @head: The pointer to the 1st element of the linked list
 * @n: The data to insert in the new element
 *
 * Return: The pointer to the new node, otherwise NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

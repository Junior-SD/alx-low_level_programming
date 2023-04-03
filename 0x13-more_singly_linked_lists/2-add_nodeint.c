#include "lists.h"

/**
 * add_nodeint - will add a new node at the beggining of listint_t list
 * @head: The pointer to the 1st node in the listint_t
 * @n: The data to insert in the new node
 *
 * Return: The pointer to new node, otherwise NULL if Fail.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

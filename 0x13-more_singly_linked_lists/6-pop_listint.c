#include "lists.h"

/**
 * pop_listint - will delete the head node of the listint_t list
 * @head: The pointer to the 1st element in listint_t
 *
 * Return: The head node's data, otherwise 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}

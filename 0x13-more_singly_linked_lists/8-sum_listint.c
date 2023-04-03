#include "lists.h"

/**
 * sum_listint - will calculate the sum of all data in listint_t
 * @head: The first node in the listint_t list
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int tot = 0;
	listint_t *temp = head;

	while (temp)
	{
		tot += temp->n;
		temp = temp->next;
	}
	return (tot);
}


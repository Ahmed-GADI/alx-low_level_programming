#include "lists.h"

/**
 * free_listint - Entry point
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

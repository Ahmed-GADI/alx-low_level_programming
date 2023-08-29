#include "lists.h"

/**
 * pop-listint - Entry point
 * @head: pointer to the head of the list
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int ret;

	if (*head == NULL)
		return (0);
	ret = tmp->n;
	(*head) = (*head)->next;
	free(tmp);
	return (ret);
}

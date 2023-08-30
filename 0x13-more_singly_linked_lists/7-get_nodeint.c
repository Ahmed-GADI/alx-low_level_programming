#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: head of the list
 * @index: number of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	while (index)
	{
		tmp = tmp->next;
		index--;
	}
	if (!tmp)
		return (NULL);
	return (tmp);
}

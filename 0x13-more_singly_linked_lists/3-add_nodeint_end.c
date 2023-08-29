#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: pointer on the head of list
 * @n: enterd int
 * Return: new node if success,NULL if not
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p = *head;

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

	while (p->next)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}

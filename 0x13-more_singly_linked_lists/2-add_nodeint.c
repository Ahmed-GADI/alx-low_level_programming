#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: the head of the precedent list
 * @n: the new entered integer
 * Return: new if success, NULL if not
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	
	if (!new)
		return (NULL);
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
}

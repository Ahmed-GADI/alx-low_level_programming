#include "lists.h"

/**
 * print_listint - Entry point
 * @h: entered list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cmpt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cmpt++;
		h = h->next;
	}
	return (cmpt);
}

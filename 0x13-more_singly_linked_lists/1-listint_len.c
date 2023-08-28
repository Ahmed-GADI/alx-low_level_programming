#include "lists.h"

/**
 * listint_len - Entry point
 * @h: entered list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t cmpt = 0;

	while (h)
	{
		cmpt++;
		h = h->next;
	}
	return (cmpt);
}

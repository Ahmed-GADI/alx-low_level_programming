#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Entry point
 * @h: entered list
 *
 * Return: numof elements
 */
size_t list_len(const list_t *h)
{
	size_t leng = 0;

	while (h)
	{
		leng++;
		h = h->next;
	}
	return (leng);
}

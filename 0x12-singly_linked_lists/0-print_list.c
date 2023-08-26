#include <stdio.h>
#include "lists.h"
/**
 * print_list - Entry point
 * @h: enterd list
 * Return: length of the list
 */
size_t print_list(const list_t *h)
{
	size_t cmpt = 0;

	while (h)
	{
		if(!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		cmpt++;
		h = h->next;
	}
	return (cmpt);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Entry point
 * @head: double pointer to the head of the list
 * @str: new string to add
 *
 * Return: head, NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strchr - Entry point
 * @s: string
 * @c: character
 * Return: p if success NULL if not
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = (char *)malloc(sizeof(char));
	p = s;

	for (i = 0; p[i] != '\0' ; i++)
	{
		if (p[i] == c)
			return (++p);
		p++;
	}
	return (NULL);
}

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

	for (i = 0 ; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}


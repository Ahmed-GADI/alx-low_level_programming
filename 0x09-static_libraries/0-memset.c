#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memset - Entry point
 * @s: Buffer
 * @b: New byte
 * @n: Till n
 * Return: new buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

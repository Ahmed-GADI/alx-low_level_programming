#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

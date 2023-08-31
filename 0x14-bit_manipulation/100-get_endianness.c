#include "main.h"

/**
 * get_endianness - Entry point
 * Return: 0 if big, 1 if not
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *) &i;

	return (*ch);
}

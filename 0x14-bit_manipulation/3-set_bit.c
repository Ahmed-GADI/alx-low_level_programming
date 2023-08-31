#include "main.h"

/**
 * set_bit - Entry point
 * @n: pointer
 * @index: index
 *
 * Return: 1 if success, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

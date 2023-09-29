#include "main.h"

/**
 * set_bit - Entry point
 * @num: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);
	*num = ((1UL << index) | *num);
	return (1);
}

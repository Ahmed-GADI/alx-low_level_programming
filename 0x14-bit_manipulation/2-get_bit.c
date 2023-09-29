#include "main.h"

/**
 * get_bit - Entry point
 * @num: number
 * @index: index to return
 * Return: value of a bit
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int v_bit;

	if (index > 63)
		return (-1);
	v_bit = (num >> index) & 1;
	return (v_bit);
}

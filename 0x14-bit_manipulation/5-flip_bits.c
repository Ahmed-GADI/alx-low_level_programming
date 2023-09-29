#include "main.h"

/**
 * flip_bits - Entry point
 * @n1: first number
 * @n2: second number
 * Return: number of changes
 */

unsigned int flip_bits(unsigned long int n1, unsigned long int n2)
{
	int i, cmp = 0;
	unsigned long int curr;
	unsigned long int exc = n1 ^ n2;

	for (i = 63; i >= 0; i--)
	{
		curr = exc >> i;
		if (curr & 1)
			cmp++;
	}
	return (cmp);
}

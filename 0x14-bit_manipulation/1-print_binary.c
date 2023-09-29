#include "main.h"

/**
 * print_binary - Entery point
 * @num: Entered number
 */

void print_binary(unsigned long int n)
{
	int i, cmp = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			_putchar('1');
			cmp++;
		}
		else if (cmp)
			_putchar('0');
	}
	if(!cmp)
		_putchar('0');
}

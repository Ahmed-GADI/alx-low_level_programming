#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *times_table - Entry point
 *Description: table times 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			printf(" %d,", i * j);
		}
		puts('\n');
	}
}

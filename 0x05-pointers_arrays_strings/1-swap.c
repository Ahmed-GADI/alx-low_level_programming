#include "main.h"
#include <stdlib.h>

/**
* swap_int - Entry point
* @a : first pointer integer
* @b : second pointer integer
*/
void swap_int(int *a, int *b)
{
	int  *tmp;

	tmp = (int *) malloc (sizeof(int));
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

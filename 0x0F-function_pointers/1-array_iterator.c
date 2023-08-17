#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - Entry point
 * @array: entered array
 * @size: size of the array
 * @action: function name
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	while (size)
	{
		action(*array);
		array++;
		size--;
	}
}

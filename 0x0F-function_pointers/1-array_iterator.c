#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - Entry point
 * @array: entered array
 * @size: size of the array
 * @action: function name
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size)
	{
		action(*array);
		array++;
		size--;
	}
}

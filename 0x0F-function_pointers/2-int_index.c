#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: entered array
 * @size: size of the array
 * @cmp: function used
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]))
			return (ind);
	}
	return (-1);

}

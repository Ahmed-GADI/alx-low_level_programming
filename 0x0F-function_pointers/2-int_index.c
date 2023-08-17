#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: entered array
 * @size: size of the array
 * @cmp: function used
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int res, ind = 0;

	while (size > 0)
	{
		res = cmp(*array);
		if (res == 1)
			return (ind);
		array++;
		ind++;
		size--;
	}
	return (-1);
}

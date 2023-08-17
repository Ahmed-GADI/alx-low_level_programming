#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: arg1
 * @...: other variables
 *
 * Return: 0 if true the sum of all parameter if not
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);

	return (sum);
}

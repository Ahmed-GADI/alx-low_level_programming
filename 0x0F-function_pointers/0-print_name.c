#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: entered name
 * @f: choosed function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: char
 * Return: 1 if true, 0 if not
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

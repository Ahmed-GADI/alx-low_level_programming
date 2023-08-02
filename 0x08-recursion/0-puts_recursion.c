#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Entry point
 * @s: string
 */

void _puts_recursion(char *s)
{
	printf("%c", *s);
	s++;
	if (*s != '\0')
		 _puts_recursion(s);
}

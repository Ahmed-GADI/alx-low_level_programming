#include "main.h"
/**
*print_sign - Entry point
* Description: 'check if lower case'
* @n: enterd data
* Return: 1 (success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

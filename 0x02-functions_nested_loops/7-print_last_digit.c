#include "main.h"
/**
*print_last_digit - Entry point
* Description: 'last digit'
* @n: Entered data
* Return: always ld (success)
*/
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	_putchar(ld + 48);
	return (ld);
}

#include "main.h"
/**
* _isupper - Entry point
* @c: char entered
* Return: 1 if upper case 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

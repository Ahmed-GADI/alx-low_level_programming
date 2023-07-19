#include "main.h"
/**
*_islower - Entry point
* Description: 'check if lower case'
* Return: 1 (success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

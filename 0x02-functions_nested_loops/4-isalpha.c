#include "main.h"
/**
*_isalpha - Entry point
* Description: 'check if lower case'
* @c: enterd data
* Return: 1 (success)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

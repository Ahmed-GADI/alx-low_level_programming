#include "main.h"
/**
* _isdigit - Entry point
* @c: char or num entered
* Return: 1 if true 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

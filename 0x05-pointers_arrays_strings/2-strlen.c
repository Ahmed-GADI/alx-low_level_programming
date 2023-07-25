#include "main.h"
#include <stdlib.h>

/**
* _strlen - Entry point
* @s : string entered
* Return: length
*/
int _strlen(char *s)
{
	char *c;
	int leng;

	c = (char *)malloc(sizeof(char));
	c = s;
	leng = 0;
	while (*c != '\0')
	{
		leng++;
		c++;
	}
	return (leng);
}

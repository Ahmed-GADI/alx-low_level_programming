#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcat - Entry point
 * @dest: first string
 * @src: second string
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	char *res, *p;
	int ln = 0;
	
	p = (char *)malloc(sizeof(char));
	p = dest;
	while (*p != '\0')
	{
		p++;
		ln++;
	}
	p = src;
	while (*p != '\0')
        {
		p++;
                ln++;
        }
	res = (char *)malloc(ln * sizeof(char));
	res = dest;
	p = res;
	ln = 0;
	while (*p != '\0')
	{
		p++;
		ln++;
	}
	p = src;
	while (*p != '\0')
	{
		*(res + ln) = *p;
		p++;
		ln++;
	}
	*(res + ln) = '\0';
	return (res);
}

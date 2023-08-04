#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: haystack if true 0 if not
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

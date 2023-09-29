#include "main.h"

/**
 * get_endianness - Entry point
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *ch = (char *) &i;
	
	return(*ch);
}

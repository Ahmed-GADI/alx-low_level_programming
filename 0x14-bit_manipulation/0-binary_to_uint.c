#include "main.h"

/**
 * binary_to_uint - Entry point
 * @bin: binary number entered
 * Return: the uint number
 */

unsigned int binary_to_uint(const char *bin)
{
	int i;
	unsigned int decimal = 0;

	if (!bin)
		return (0);

	for (i = 0; bin[i]; i++)
	{
		if (bin[i] < '0' || bin[i] > '1')
			return (0);

		decimal = decimal * 2 + (bin[i] - '0');
	}
	return (decimal);
}

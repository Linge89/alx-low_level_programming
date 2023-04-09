#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	/*check if value b is NULL*/
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	value = 2 * value + (b[i] - '0');
	}
	return (value);
}

#include "main.h"

/**
 * _memset - fill memory with constant bytes
 * @s: pointer
 * @b: constant byte
 * @n: size of the memory
 * Return: pointer to the memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
		s[i] = b;
	return (s);
}

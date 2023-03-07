#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;
	unsigned int check;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 0;
			}
		}
	}
	return (0);
}

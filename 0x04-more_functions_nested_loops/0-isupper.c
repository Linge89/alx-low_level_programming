#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *@c : the number to be checked
 * Return: 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

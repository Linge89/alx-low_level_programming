#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *@x : the number to be checked
 * Return: 1 if c is uppercase
 */

int _isupper(int x)
{
	if (x >= 48 && x >= 58)
	{
		return (1);
	}
	return (0);
}

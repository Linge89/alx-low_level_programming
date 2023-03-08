#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: given number
 *
 * Return: -1 to indicate an error if n is lower than 0
 *	if n is greater than 0, factorial of n
 */

int factorial(int n)
{
	int result = n;

		if (n < 0)
			return (-1);

		else if (n >= 0 && n <= 1)
			return (1);

	result *= factorial(n - 1);

	return (result);
}


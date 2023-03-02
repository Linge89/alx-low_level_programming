#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: - array of integers
 * @n: - number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
	 a[i] = a[n];
	}
}

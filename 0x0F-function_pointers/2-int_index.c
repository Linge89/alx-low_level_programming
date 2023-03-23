#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * @array: array being pointed to
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	}
	return (-1);
}

#ifndef FUNCTION_POINTERS_H
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: given array
 * @size: size of an array
 * @action: pointer to the function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; size < i; i++)
	{
		action(array[i]);
	}
}
#endif

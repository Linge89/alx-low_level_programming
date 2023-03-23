#include <stdlib.h>
#ifndef FUNCTION_POINTERS_H

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
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
	return;
	for (i = 0; i < size ; i++)
	{
	p(array[i]);
	}
}
#endif

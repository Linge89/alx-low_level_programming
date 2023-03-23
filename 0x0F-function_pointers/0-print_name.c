#ifndef FUNCTION_POINTERS_H
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: name to be printed.
 * @f: pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
#endif
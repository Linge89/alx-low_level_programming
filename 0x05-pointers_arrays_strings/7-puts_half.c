#include "main.h"

/**
 * puts_half - print half of the string
 * @str: the string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}

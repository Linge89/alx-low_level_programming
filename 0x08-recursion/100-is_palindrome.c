#include "main.h"

int find_strlen(char *s);
int check_palindrom(char *s, int len, int index);
int is_palindrone(char *s);

/**
 * find_strlen - returns length of a string
 * @s: string to be measured
 * Return: the length of a string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}


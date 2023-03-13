#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
		
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;	
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}	
	if (f == 0)	
		return (0);
	return (n);
}

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;
	int k;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", j * k);
		return (0);
	}
		printf("error\n");
	return (1);
}

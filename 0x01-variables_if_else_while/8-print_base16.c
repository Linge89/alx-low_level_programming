#include <stdio.h>

/**
 * main - numbers of base 
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char b;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
			for (b = 'a' ; b <= 'f' ; b++)
				putchar(b);
	putchar('\n');
	return (0);
}

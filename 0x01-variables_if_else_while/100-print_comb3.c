#include <stdio.h>

/**
 * main - combination of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int m;

	for (i = 0 ; i < 10 ; ++i)
	{
		for (m = 0 ; m < 10 ; ++m)
		{
			putchar(i + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

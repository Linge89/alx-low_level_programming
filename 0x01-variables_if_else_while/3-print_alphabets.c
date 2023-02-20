#include <stdio.h>
/**
 * main - Print alphabet in lower and uppercase
 * Return: 0
 */
int main(void)
{
	char i;
	char m;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
			for (m = 'A' ; m <= 'Z' ; m++)
			putchar(m);
		putchar('\n');
		return (0);
}



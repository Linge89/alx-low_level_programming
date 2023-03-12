#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments passed
 * @argv: names of those arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}

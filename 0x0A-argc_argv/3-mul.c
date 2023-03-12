#include <stdio.h>
#include <stdlib.h>

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

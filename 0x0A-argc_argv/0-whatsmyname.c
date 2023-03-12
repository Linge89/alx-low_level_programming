#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments passed
 * @argv: names of those arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

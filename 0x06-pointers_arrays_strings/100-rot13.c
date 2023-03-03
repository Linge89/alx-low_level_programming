#include "main.h"

/**
 * rot13 - encodes a string
 * @s: pointer to the string
 * Return: s
 */

char *rot13(char *s)
{
	int count = 0, j;
	char data1[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	char datarot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + count) == data1[j])
			{
				*(s + count) =  datarot[j];
				break;
			}
		}
		count++;
	}
	return (s);
}

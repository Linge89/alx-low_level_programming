#include "main.h"

/**
 * rot13 - encodes a string
 * @s: pointer to the string
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] =  datarot[j];
				break;
			}
		}
		count++;
	}
	return (s);
}

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - finds the natural square root of an inputted num
 * @num: number to find the square root of
 * @root: root to be tested
 * Return: -1 if n doesn't have a natural square root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return square root of
 * Return: -1 if doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

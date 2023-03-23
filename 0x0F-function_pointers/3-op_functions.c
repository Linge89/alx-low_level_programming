#include "3-calc.h"

/**
 * op_add - calculates sum of integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: diference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (int a * int b);
}

/**
 * op_div - calcultes division of integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (int a / int b);
}

/**
 * op_mod - calcultes remainder of division of integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (int a % int b);
}

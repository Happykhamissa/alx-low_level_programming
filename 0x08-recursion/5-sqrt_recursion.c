#include "main.h"

/**
 * _sqrt2 - function to perform the actual calculation.
 * @a: a first value
 * @b: a second value
 * Return: On error, -1
 */

int _sqrt2(int a, int b)

{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt2(n, 1));

	}
}

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first value
 * @y: second value
 *
 * Return: -1 if y is slower than zero, 1 if y is equal to zero
 */

int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}

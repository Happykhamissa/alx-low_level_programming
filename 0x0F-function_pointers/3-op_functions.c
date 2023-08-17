#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - returns the sum of a and b.
 * @a: first addend
 * @b: second addend
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: minuend
 * @b: subtrahend
 *
 * Return: the refference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: multiplicand
 * @b: multiplier
 *
 * Return: A product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the remainder of the division of a by b
 * @a: dividend
 * @b: divider
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		exit(100);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: dividend
 * @b: divider
 *
 * Return: A remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		exit(100);
}

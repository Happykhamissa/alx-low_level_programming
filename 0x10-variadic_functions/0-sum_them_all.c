#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int S = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			S += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (S);
	}
return (0);
}

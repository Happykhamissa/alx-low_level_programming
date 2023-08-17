#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: an array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 If no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				return (i);
			}
		}
	}
	return (-1);
}


#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: first integer
 * @max: second integer
 *
 * Return: A pointer to the newly created array
 */

int *array_range(int min, int max)

{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(arr));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		arr[i] = min;

	return (arr);
}

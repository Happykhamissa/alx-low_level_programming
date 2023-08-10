#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *Array;
	int i, j = 0;

	if (min > max)
		return (NULL);

	Array = malloc(((max - min) + 1) * sizeof(int));

	if (Array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			Array[j] = i;
			j++;
		}
		return (Array);
	}
	else
		return (NULL);

}

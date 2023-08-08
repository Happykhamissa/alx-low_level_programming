#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars
 * @size: size of the memory to print
 * @c: character to initialize the array
 * Return: A pointer to the array
 *
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
	{
		return (NULL);
	}

		array = (char *)malloc(size *  sizeof(char));

		if (array == NULL)
		{
			printf("memory not available");
			return (NULL);
		}
		
			for (i = 0; i < size ; i++)
				array[i] = c;
	
	return (array);
}

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long integer number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int Num = *n;
	unsigned long int S = 1;

	if (index >= (8 * sizeof(Num)))
		return (-1);
	S = S << index;

	if ((Num & S) == 0)
		*n = (Num | S);

	return (1);

}

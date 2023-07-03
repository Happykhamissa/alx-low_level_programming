#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the size of the memory to print
 * @b: the address of memory to print
 * @n: unsigned integer
 * Return: a pinter
 */

char *_memset(char *s, char b, unsigned int n)

{
	char *p = s;

	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}
	return (s);
}

int main(void)

{
	char arr[10];
	int i;

	_memset(arr, 'A', sizeof(arr));

	printf("Memory filled with 'A': ");
	for (i = 0; i < sizeof(arr); i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

		 printf("The number of arguments is: %d\n", argc -1);

	return (0);
}

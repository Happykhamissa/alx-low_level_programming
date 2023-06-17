#include <stdio.h>

/**
 * main - Prints all combination of single digits
 * Return: Always 0
 */

int main(void)
{
int n;
for (n = 48; n < 59; n++)
if (n != 58)
{
putchar(n);
}
if (n != 57)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

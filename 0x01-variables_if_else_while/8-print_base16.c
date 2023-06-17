#include <stdio.h>

/**
 * main - Prints all the numbers of base 16
 * Return: Always 0
 */

int main(void)
{
int num;
for (num = 0; num < 16; num++)
{
if (num < 10)
{
putchar("%d ", num);
}
else
{
putchar("%c ", 'a' + num - 10);
}
}
putchar("\n");
return (0);
}


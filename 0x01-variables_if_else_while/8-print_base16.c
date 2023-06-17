#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
putchar(num);
for (num = 'a'; num <= 'f'; num++)
putchar(num);
putchar('\n');
return (0);
}

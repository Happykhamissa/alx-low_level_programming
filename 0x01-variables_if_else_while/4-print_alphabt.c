#include <stdio.h>

/**
 * main - Prints the aphabet in lowercase
 * followed by a nez line, except q and e
 * Return: Always 0
 */

int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
putchar('\n');
return (0);
}

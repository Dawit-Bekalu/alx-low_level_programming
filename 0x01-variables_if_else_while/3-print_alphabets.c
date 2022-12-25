#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Alaways 0
 */
int main(void)
{

char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}

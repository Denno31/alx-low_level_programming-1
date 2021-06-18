#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d;

for (d = '0' ; d <= '9' ; d++)
{
for (c = '0' ; c <= '9' ; c++)
{
if (d < c)
{
putchar(d);
putchar(c);
if (c == '9' && d == '8')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

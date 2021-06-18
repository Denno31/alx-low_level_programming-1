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
int d = 0, c = 1, b = 2;

for (d = '0' ; d <= '9' ; d++)
{
for (c = '0' ; c <= '9' ; c++)
{
for (b = '0' ; b <= '9' ; b++)
{
if (d < c && c < b)
{
putchar(d);
putchar(c);
putchar(b);
if (d == '7' && c == '8' && b == '9')
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
}
putchar('\n');
return (0);
}

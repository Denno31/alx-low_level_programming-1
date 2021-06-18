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
	int nody;

	for (nody = '0' ; nody <= '9' ; nody++)
	{
	putchar(nody);
		if (nody < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');

return (0);
}

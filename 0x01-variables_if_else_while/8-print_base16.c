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
	char nody;

	for (nody = 48 ; nody < 58 ; nody++)
	{
	putchar(nody);
	}
	for (nody = 97 ; nody < 103 ; nody++)
	{
	putchar(nody);
	}
	putchar('\n');

return (0);
}

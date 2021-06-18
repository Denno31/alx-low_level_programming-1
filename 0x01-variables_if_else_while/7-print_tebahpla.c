#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *Description: printing value in lower case alphabeticaly
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nody;

	for (nody = 122 ; nody > 96  ; nody--)
	{
	putchar(nody);
	}
	putchar('\n');

return (0);
}

#include "holberton.h"
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char holb[] = "Holberton";
	int i;

	for (i = 0 ; i < 9 ; i++)
		_putchar(holb[i]);
	_putchar('\n');
	return (0);
}


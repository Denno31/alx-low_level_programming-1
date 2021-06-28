#include "holberton.h"
/**
 * _atoi - copies a string
 * @s: source to copy string to
 *
 * Return: copied string
 */
int _atoi(char *s)
{
	int x, y, z = 0;

	for ( x = 0 ; s[x] != 0 ; x++ )
		{
			if (s[x] == '-')
			y++;
			if ((s[x] >= '0') && (s[x] <= '9'))
			{
				s[z] = s[x];
				z++;
			}
		}
		if (y % 2 == 0)
		return (s)
		else
		return (-s);
}

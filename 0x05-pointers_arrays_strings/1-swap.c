#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for ALX School students.
 *@a: first value to be swaped
 *@b: second value to be swaped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 98;

	swap(&a, &b);
}

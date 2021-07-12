#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - arguments to main
 * @argc: first arg is a count
 * @argv: second arg is a pointer to char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, y;
	int add = 0;

	x = 1;
	while (argv[x])
	{
		y = 1;
		while (argv[x][y])
		{
			if ((isdigit(argv[x][y]) == 0))
			{
				printf("error\n");
				return (1);
			}
		y++;
		}
	x++;
	}
	x = 1;

	while (argv[x] != argv[argc])
	{
		add += atoi(argv[x]);
		x++;
	}

	printf("%d\n", add);
return (0);
}

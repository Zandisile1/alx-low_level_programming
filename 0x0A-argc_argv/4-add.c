#include <stdio.h>
#include <stdlib.h>


/**
* main - program that adds positive numbers.
* @argc: count
* @argv: array arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int x, y, total = 0;
	char *flag;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}


	for (x = 1; argv[x]; x++)
	{
	y = strtol(argv[x], &flag, 10);
	if (*flag)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	total += y;
	}
	}
	printf("%d\n", total);

	return (0);
}

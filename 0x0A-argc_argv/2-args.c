#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argv: array argument
 * @argc: number of arguments
 *
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

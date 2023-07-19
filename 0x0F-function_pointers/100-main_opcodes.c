#include <stdio.h>
#include <stdlib.h>

/**
 * main - prinnts the opcodes
 * @argc: The number of arguments given to the program
 * @argv: an Array
 *
 * Return: 0 if sucesssful
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	int(*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
	opcode = *(unsigned char *)address;
	printf("%.2x", opcode);

	if (i == bytes - 1)
		continue;

	printf(" ");

	address++;
	}
	printf("\n");

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: count
* @argv: arguments
*
* Return: 0 if sucessful
*/

int main(int argc, char **argv)
{
	int sum, iCount;
	unsigned int x;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	sum = strtol(argv[1], &p, 10);
	iCount = 0;

	if (!*p)
	{
	while (sum > 1)
	{
	for (x = 0; x < sizeof(cents[x]); x++)
	{
	if (sum >= cents[x])
	{
	iCount += sum / cents[x];
	sum = sum % cents[x];
	}
	}
	}
	if (sum == 1)
	iCount++;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", iCount);
	return (0);
}

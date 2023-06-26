#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: the name of the array
 * @n: number of elements in the array
 * Return : a and n inputs
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}

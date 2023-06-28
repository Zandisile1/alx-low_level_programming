#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements in the array
 * @a: pointer to the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		tmp = a[count];
		a[count++] = a[n];
		a[n--] = tmp;
	}
}

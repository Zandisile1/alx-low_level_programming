#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer
 * if man > max return NULL
 * if ,malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *array, x;

	if (min > max)
	return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
	return (NULL);

	for (x = 0; min <= max; x++, min++)
	array[x] = min;

	return (array);
}

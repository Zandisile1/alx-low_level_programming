#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Entry point
 * @nmemb:  array of elements
 * @size: number of bytes
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x, y;
	char *ptr;

	x = 0;
	y = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	ptr = malloc(y);

	if (ptr == NULL)
	return (NULL);

	while (x < y)
	{
	ptr[x] = 0;
	x++;
	}
	return (ptr);
}

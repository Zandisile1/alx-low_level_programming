#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array, initializes it with a specific char
 * @size: the array size
 * @c: the character to be filled
 *
 * Return: Array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (x = 0; x < size; x++)
	{
	s[x] = c;
	}
	return (s);
}

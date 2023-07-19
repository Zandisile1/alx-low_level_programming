#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: array of the iterator
 * @size: size of the array
 * @action: pointer to the array
 *
 * Return: 0 if sucessful
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}

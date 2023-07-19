#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: Array of the pointer
 * @size: size of the elelment in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	 x = 0;
	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
			if (cmp(array[x]))
			return (x);
			x++;
			}
		}
	}
	return (-1);
}

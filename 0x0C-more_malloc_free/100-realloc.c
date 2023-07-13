#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _realloc - Entry point
 * @ptr: pointer to the previous memory
 * @old_size: size in bytes
 * @new_size: new size in bytes
 *
 * Return: ptr
 * if new_size == old_size return ptr
 * if malloc fails return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr ==  NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

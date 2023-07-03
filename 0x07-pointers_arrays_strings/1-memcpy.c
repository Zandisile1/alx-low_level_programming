#include "main.h"

/**
 *_memcpy - Entry point
 * @dest: destination
 * @src: Memory area
 * @n: bytes of the memory
 *
 * Return: 0 if sucessful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}

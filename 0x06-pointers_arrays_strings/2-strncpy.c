#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - get the length of a string
 * @src: String pointer
 * @dest: Destination of the pointer
 * @n: digit
 * Return: Destination of the pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
	dest[z] = src[z];

	for (; z < n; z++)
		dest[z] = '\0';
	return (dest);
}

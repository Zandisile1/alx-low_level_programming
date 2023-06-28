#include "main.h"

/**
 * *_strncat - function that concatenates a string
 * @src: source string pointer
 * @dest: destination of the string.
 * @n: number of bytes
 * Return: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthStr, x;

	for (lengthStr = 0; dest[lengthStr] != '\0'; lengthStr++)
	;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[lengthStr + 1] = '\0';
	return (dest);
}

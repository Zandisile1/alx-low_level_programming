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

	lengthStr = 0;
	while (dest[lengthStr] != '\0')
	{
	lengthStr++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[lengthStr + 1] = '\0';
	lengthStr++;
	x++;
	}
	dest[lengthStr] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string pointer
 * @dest: destination of the string pointer
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int lengthStr, x;

	lengthStr = 0;
	while (dest[lengthStr] != '\0')
	{
	lengthStr++;
	}
	for (x = 0; src[x] != '\0'; x++)
	lengthStr++;
	{
	dest[lengthStr] = src[x];
	}
	dest[lengthStr] = '\0';
	return (dest);
}

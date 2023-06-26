#include "main.h"

/**
 * _strcpy - a function that prints n elements of an array of integers
 * @dest: Value of destination
 * @src : Value of the source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
	dest[l] = src[l];
	}
	dest[l++] = '\0';
	return (dest);
}

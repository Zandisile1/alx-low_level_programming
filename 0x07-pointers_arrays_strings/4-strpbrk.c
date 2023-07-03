#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of byte
 * @s: the first occurrence in the string
 * @accept: bytes
 * Return: 0 if sucessful
 */

char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
	for (z = 0; accept[z]; z++)
	{
	if (*s == accept[z])
		return (s);
	}
	s++;
	}
	return ('\0');
}

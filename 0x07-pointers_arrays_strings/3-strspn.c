#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: number of bytes in initial segment
 * @accept: bytes form s
 * Return: 0 if sucessful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int n;

	while (*s)
	{
	for (n = 0; accept[n]; n++)
	{
		if (*s == accept[n])
		{
		i++;
		break;
		}
		else if (accept[n + 1] == '\0')
			return (i);
	}
	s++;
	}
	return (i);
}

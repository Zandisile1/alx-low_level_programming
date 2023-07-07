#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: Pointed destination
 * @b: Number of byte
 * @n: bytes
 * Return: 0 if Sucessful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

#include "main.h"

/**
 * int _strcmp - compares strings
 * @s1: pointer to the first string
 * @s2: Poointer to the second string
 * Return:Value less than 0 is less, vaulue greater than 0 if more
 */

int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = 0;

	while (s1[x] == s2[x] && s1[x] != '\0')
	{
	x++;
	}
	y = s1[x] - s2[x];
	return (y);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: the string to be duplicated
 *
 * Return: The duplicated string
 */

char *_strdup(char *str)
{
	int x, y;
	char *s;

	x = 0;
	y = 1;

	if (str == NULL)
	return (NULL);

	while (str[y])
	{
	y++;
	}

	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
	return (NULL);

	while (x < y)
	{
	s[x] = str[x];
	x++;
	}
	s[x] = '\0';
	return (s);
}

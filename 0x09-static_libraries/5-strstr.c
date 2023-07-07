#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: String
 * @needle: the substring
 * Return: 0 if Sucessful
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
		a++;
		b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}

#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @a : pointer to string
 *
 * Return: pointer to uppercase
 */

char *string_toupper(char *a)
{
	int len;

	len = 0;

	while (a[len] != '\0')
	{
	if (a[len] >= 97 && a[len] <= 122)
	{
	a[len] = a[len] - 32;
	}
	len++;
	}
	return (a);
}

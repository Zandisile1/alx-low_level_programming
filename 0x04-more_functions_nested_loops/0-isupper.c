#include "main.h"

/**
 * _isupper - checks the characters
 * @c: the letter to be checked
 *
 * Return: 1 for uppercase and 0 for something else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: Checks for a digit (0 through 9).
 *
 * Return: 1 for a number, and 0 for characters
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

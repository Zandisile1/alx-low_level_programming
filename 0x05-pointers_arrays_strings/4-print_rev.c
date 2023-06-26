#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: chect the charater and reverse
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}

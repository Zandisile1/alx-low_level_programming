#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: The string displayed
 *
 * Return: 0 if sucessful
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

#include "main.h"

/**
 * print_most_numbers - prints numbers exluding 2 and 4
 *
 * Return:void
 */

void print_most_numbers(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
	if (!(y == '2' || y == '4'))
	_putchar(y);
	}
	_putchar('\n');
}

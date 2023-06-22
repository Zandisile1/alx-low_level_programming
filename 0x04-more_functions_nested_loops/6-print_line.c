#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: Number of times
 * Return:0 Always (Sucess)
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
}

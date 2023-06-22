#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number to be enetered.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	_putchar('\n');
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}

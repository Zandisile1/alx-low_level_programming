#include "main.h"
/**
 * print_times_table - Prints a multiplication
 * @n : the number to be treated
 *
 * Return: number matrix
 *
 */
void print_times_table(int n)
{
int l, m, z;
if (n >= 0 && n <= 15)
{
for (l = 0; l <= n; l++)
{
_putchar(48);
for (m = 1; m <= n; m++)
{
z = l * m;
_putchar(44);
_putchar(32);
if (z <= 9)
{
_putchar(32);
_putchar(32);
_putchar(z + 48);
}
else if (z <= 99)
{
_putchar(32);
_putchar((z / 10) + 48);
_putchar((z % 10) + 48);
}
else
{
_putchar(((z / 100) % 100) + 48);
_putchar(((z / 10) % 10) + 48);
_putchar((z % 10) + 48);
}
}
_putchar('\n');
}
}
}

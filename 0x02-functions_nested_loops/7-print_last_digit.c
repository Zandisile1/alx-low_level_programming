#include "main.h"

/**
 * print_last_digit -prints the last digit of a number.
 * @x: the number checked.
 * Return: Value of the last digit number
 */

int print_last_digit(int x)
{
int last;
last = x % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}

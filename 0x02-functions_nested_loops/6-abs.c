#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @c: the absolute number to be computed.
 *
 * Return: Asolute value or zero
 */

int _abs(int c)
{
int b = c;
int abs_val;

if (b < 0)
{
b = b * (-1);
}
abs_val = b;
return (abs_val);
}

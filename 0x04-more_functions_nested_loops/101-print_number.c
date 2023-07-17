#include "main.h"

/**
 * print_number - Displays the integer
 * @n: input integer
 *
 * Return:0 always (Sucess)
 */

void print_number(int n)
{
        unsigned int a;

        if (n < 0)
        {
                n = -1;
                _putchar('-');
        }
        else
        {
                a = n;
        }
        if (a / 10)
        {
                print_number(a / 10);
        }
        _putchar((a % 10) + '0');
}

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: swaps and stores the value of b
 * @b: swaps and stores the value of a
 * Return: 0nif sucessful
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *b;
*b = *a;
*a = swap;
}

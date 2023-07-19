#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - contain the 5 following functions
 * @a: input
 * @b: input
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - contain the 5 following functions
 * @a: input
 * @b: input
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - contain the 5 following functions
 * @a: input
 * @b: input
 *
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - contain the 5 following functions
 * @a: input
 * @b: input
 *
 * Return: divident
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - contain the 5 following functions
 * @a: input
 * @b: input
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}

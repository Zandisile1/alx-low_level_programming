#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of parameteres
 * @n: the number of parameters passed
 * @..: variable number of parameters
 *
 * Return: n == 0 - 0.
 * else all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

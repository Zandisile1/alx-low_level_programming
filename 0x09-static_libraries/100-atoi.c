#include "main.h"

/**
 * _atoi - Changes a string into an int
 * @s: the pointer
 *
 * Return: Interger
 */

int _atoi(char *s)
{
	int x, y, n, leng, z, num;

	x = 0;
	y = 0;
	n = 0;
	leng = 0;
	z = 0;
	num = 0;

	while (s[leng] != '\0')
		leng++;
	while (x < leng && z == 0)
	{
		if (s[x] == '-')
		++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
		num = s[x] - '0';
		if (y % 2)
		num = -num;
		n = n * 10 + num;
		z = 1;
		if (s[x + 1] < '0' || s[x + 1] > '9')
		break;
		z = 0;
		}
		x++;
	}
	if (z == 0)
	return (0);
	return (n);
}

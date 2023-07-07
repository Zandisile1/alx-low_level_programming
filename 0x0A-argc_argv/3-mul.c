#include "main.h"
#include <stdio.h>

/**
 * _atoi - program that multiplies two numbers
 * @s: string to b changed
 *
 * Return: string converted into string
 */

int _atoi(char *s)
{
	int a, b, c, length, e, num;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	e = 0;
	num = 0;

	while (s[length] != '\0')
	length++;

	while (a < length && e == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
		num = s[a] - '0';
		if (b % 2)
		num = -num;
		c = c * 10 + num;
		e = 1;
		if (s[a + 1] < '0' || s[a + 1] > '9')
			break;
		e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);

	return (c);
}

/**
 *  main - multiples two numbers
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0 if sucessful, 1 if not
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}


#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - Entry point
 * @s: String to be checked
 *
 * Return: 0 if non-digit else 1
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
	if (s[a] < '0' || s[a] > '9')
	return (0);

	a++;
	}
	return (1);
}

/**
 * _strlen - length of the string
 * @s: String checked
 *
 * Return: length
 */

int _strlen(char *s)
{
	int y = 0;

	while (s[y] != 0)
	y++;
	return (y);
}

/**
 * errors - checks mistakes in main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Entry point
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, i, carry, num1, num2, *result, x = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 =  length1 - 1; length1 >= 0; length1--)
	{
		num1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
		num2 = s2[length2] - '0';
		carry += result[length1 + length2 + 1] + (num1 * num2);
		result[length1 + length2 + 1] = carry % 10;
		carry /= 10;
		}
		if (carry > 0)
		result[length1 + length2 + 1] += carry;
	}
		for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (!x)
		_putchar ('0');
	_putchar('\n');
	free(result);
	return (0);
}

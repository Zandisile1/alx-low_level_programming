#include "main.h"

/**
 * _atoi - Changes a string into an int
 * @s: the pointer
 *
 * Return: Interger
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int start = 0;
	int isi = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	start *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	isi = 1;
	b = (b * 10) + (s[a] - '0');
	a++;
	}
	if (isi == 1)
	{
	break;
	}
	a++;
	}
	b *= start;
	return (b);
}

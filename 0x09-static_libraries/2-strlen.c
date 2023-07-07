#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * @s: Lenght of the string to be checked
 * Return: length
 */

int _strlen(char *s)
{
	int length_Str = 0;

	while (s[length_Str])
		length_Str++;
	return (length_Str);
}

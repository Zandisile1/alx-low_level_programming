#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @b: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *b)
{
	int index = 0;

	while (b[index])
	{
		while (!(b[index] >= 'a' && b[index] <= 'z'))
			index++;

		if (b[index - 1] == ' ' ||
		    b[index - 1] == '\t' ||
		    b[index - 1] == '\n' ||
		    b[index - 1] == ',' ||
		    b[index - 1] == ';' ||
		    b[index - 1] == '.' ||
		    b[index - 1] == '!' ||
		    b[index - 1] == '?' ||
		    b[index - 1] == '"' ||
		    b[index - 1] == '(' ||
		    b[index - 1] == ')' ||
		    b[index - 1] == '{' ||
		    b[index - 1] == '}' ||
		    index == 0)
			b[index] -= 32;

		index++;
	}

	return (b);
}

#include <stdio.h>
#include <ctype.h>
/**
 * Main - Prints the alphabets in reverse
 *
 * Return: Always 0.
 */

/*Function main: Betty coding style*/
int main(void)
{
char letter = 'z';

for (letter = 'z'; letter >= 'a'; letter--)
/* Dispalying alphabets in reverse*/
putchar(letter);
putchar('\n');
return (0);
}


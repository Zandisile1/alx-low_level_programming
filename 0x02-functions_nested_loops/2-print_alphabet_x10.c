#include "main.h"

/**
 * print_alphabet_x10 -Display alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char letter;
int y;
y = 0;
while (y  < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
++y;
}
}

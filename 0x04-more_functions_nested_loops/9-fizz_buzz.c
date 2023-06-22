#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints al the nmbers between 1-100
 * Fizz for multipls of 3,buzz for 5 multiples
 *
 * Return:0 always (sucess)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 15 == 0)
	printf("FizzBuzz");
	else if (a % 3 == 0)
	printf("Fizz");
	else if (a % 5 == 0)
	printf("Buzz");
	else
	printf("%i", a);
	if (a < 100)
	printf(" ");
	}
	printf("\n");
	return (0);
}


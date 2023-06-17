#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - Entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("The number: %d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("The number: %d is %s\n", n, "positive");
	}
	else
	{
		printf("The number : %d is %s\n", n, "Zero");
	}
	return (0);
}
